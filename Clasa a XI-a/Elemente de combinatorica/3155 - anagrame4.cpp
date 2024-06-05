#include <iostream>
#include <cstring>

using namespace std;

int n, frec[21], res[21];
char text[101];  // Adjusted size to handle up to 100 characters

void afisare() {
    for(int i = 1; i <= n; i++)
        cout << text[res[i] - 1];  // Adjusted to print the correct character
    cout << '\n';
}

int esteConsoana(char s) { 
    if(strchr("AEIOUaeiou", s)) return 0;
    return 1;
}

int verificare(int k) {
    if(esteConsoana(text[res[k] - 1]) && res[k] - 1 != k - 1) return 0;  // Corrected the condition to compare indices properly
    return 1;
}

void back(int k) {
    for(int i = 1; i <= n; i++) {
        if(!frec[i]) {
            res[k] = i;
            frec[i] = 1;
            if(verificare(k)) {
                if(k < n) back(k + 1);
                else afisare();
            }
            frec[i] = 0;  // Corrected from '==' to '=' for proper assignment
        }
    }
}

int main() {
    cin.getline(text, 101);
    n = strlen(text);  // Set the value of n based on the actual input length
    
    for(int i = 0; text[i]; i++) {
        if(!esteConsoana(text[i])) {
            for(int j = i + 1; text[j]; j++) {
                if(!esteConsoana(text[j]) && text[i] > text[j])
                    swap(text[i], text[j]);
            }
        }
    }

    back(1);

    return 0;
}

#include <iostream>
#include <cstring>

using namespace std;

bool palindrom(char a[]) {
    
    int i = 0;
    int j = strlen(a) - 1;
    
    int ok = 1;
    
    while(i < j) {
        if(tolower(a[i]) != tolower(a[j])) ok = 0;
        i++;
        j--;
    }
    
    return ok;
    
}

int main() {
    char a[1001], m[1001][1001];
    cin.getline(a, 1001);
    
    char *p = strtok(a, " :;.,");
    int ind = 0;
    while(p) {
        
        
        
        strcpy(m[ind++], p);
        
        p = strtok(NULL, " :;.,");
    }
    
    int max = 0;
    
    for(int i = 0;i<ind;i++) {
        if(palindrom(m[i])) {
            if(strlen(m[i]) > max) {
                strcpy(a, m[i]);
                max = strlen(m[i]);
            }
        }
    }
    
    cout << a;

    return 0;
}

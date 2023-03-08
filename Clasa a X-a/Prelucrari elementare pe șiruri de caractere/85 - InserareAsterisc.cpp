#include <iostream>

using namespace std;

bool eVocala(char n) {
    if(n == 'e' || n == 'o' || n == 'i' || n == 'a' || n == 'u') {
        return true;
    }
    return false;
}

int main()
{
    char sir[10001];
    cin.get(sir,10001);
    
    bool vocale = false;
    
    for(int i = 0; sir[i] != '\0'; ++i) {
        if(eVocala(sir[i])) {
            vocale = true;
            break;
        }
    }
    
    if(!vocale) {
        cout << "FARA VOCALE";
        return 0;
    }

    for(int i = 0; sir[i] != '\0'; ++i) {
        cout << sir[i];
        
      
        if(eVocala(sir[i])) {
            cout << "*";
        }
        
    }

    return 0;
}

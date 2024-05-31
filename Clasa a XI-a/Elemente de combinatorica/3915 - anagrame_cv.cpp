#include <iostream>
#include <cstring>

using namespace std;

char prop[250];
int n, res[13], frec[13];
int nr = 0;
int esteVocala(char k) {
    if(strchr("aeiouAEIOU", k)) return 1;
    return 0;
}

int verificare(int k) {
    
    if(k>1) {
        char a = prop[res[k] - 1];
        char b = prop[res[k-1] - 1];
        
         if(esteVocala(a) && esteVocala(b)) return 0;
        if(!esteVocala(a) && !esteVocala(b)) return 0;
    }
   
    return 1;
}



void afisare() {
    for(int i = 1;i<=n;i++)
        cout << prop[res[i]-1];
    cout << '\n';
}

void back(int k) {
    
    for(int i = 1;i<=n;i++) {
        res[k] = i;
        if(!frec[i]) {
            frec[i] = 1;
            
            if(verificare(k)) {
                if (k<n) back(k+1);
                else {afisare(); nr++;}
            }
            
            
            
            frec[i] = 0;
        }
    }
}

int verif(char s[]) {
    for(int i = 1;s[i];i++) {
        if(esteVocala(s[i]) && esteVocala(s[i-1])) return 0;
        if(!esteVocala(s[i]) && !esteVocala(s[i-1])) return 0;
    }
    return 1;
}

int main() {
    
    
    cin.getline(prop, 250);
    n = strlen(prop);
    
    for(int i = 0; prop[i];i++)
        for(int j = i + 1;prop[j];j++)
            if(prop[i] > prop[j]) swap(prop[i], prop[j]);
            
    back(1);
            
    if(!nr) cout << "IMPOSIBIL";
    return 0;
}

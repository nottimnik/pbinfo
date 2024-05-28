#include <iostream>

using namespace std;

int n, minim  = 2 ^ 32 - 1, frec[20], res[20], mini[20], v[20];

void afisare() {
    for(int i = 1;i<=n;i++) 
        cout << v[res[i]] << ' ';
    cout << '\n';
}

int verificare() {
    for(int i = 1;i<=n;i++) 
        if(mini[i] && v[res[i]] != minim) return 0;
    return 1;
}

void back(int k) {
    
    for(int i = 1;i<=n;i++) {
        res[k] = i;
        if(!frec[i]) {
            frec[i] = 1;
            
            if(k < n) back(k + 1);
            else {
                if(verificare()) afisare();
            }
            
            frec[i] = 0;
            
        }
        
    }
    
}

void sortare() {
    for(int i = 1;i<=n;i++) 
        for(int j = i + 1;j<=n;j++) 
            if(v[i] > v[j] && !mini[i] && !mini[j]) swap(v[i], v[j]);      
}

int main() {
    cin >> n; 
    for(int i = 1;i<=n;i++) {
        cin >> v[i];
        minim = min(minim, v[i]);
    }
    
    for(int i = 1;i<=n;i++) 
        if(v[i] == minim) mini[i] = 1;
    
    sortare();
    back(1);
    
    return 0;
}

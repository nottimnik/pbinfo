#include<iostream>
using namespace std;

int n, x[11], y[11], s, nr, sum, v[11];

void citire() {
    
    cin>>n>>s;   
    
    for(int i = 1;i<=n;++i) {
        cin>>x[i];
    }
    
    for(int i = 1;i<=n;++i) {
        cin >> y[i];        
    }
    
}

void afis() {
    if(sum == s) {
        for(int i = 1;i<=n;++i) 
            cout<< v[i] << " ";
        nr++;
        cout<< "\n";
        
    }
}

int verif(int k) {
    sum = 0;
    for(int i = 1;i<=k;++i) {
        sum = sum + x[i]*v[i];
    }
    
    return sum <= s;
}


void bt() {
    int k = 1;
    v[k] = -1;
    
    while(k>0 && nr < 1) {
        while(v[k] < y[k] && nr < 1) {
            v[k]++;
            if(verif(k) == 1) {
                if(k == n) {
                    afis();
                }
                else {
                    v[++k] = -1;
                }
                
            }
        }
        k--;
    }
}

int main() {
    
    citire();
    bt();
    // cout << nr;
    return 0;
}

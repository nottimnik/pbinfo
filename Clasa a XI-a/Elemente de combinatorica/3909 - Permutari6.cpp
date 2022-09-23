#include<iostream>

using namespace std;

int n, a, v[1000001], p[1000001];

void afisare() {
    for(int i = 1;i<=n-a+1;++i) {
    
     
            cout << v[i] + a - 1 << ' ';
        
            
    }
    cout << '\n';
}

void back(int k) {
    for(int i = 1;i<=n-a+1;++i) {
        
        if(!p[i]) {
            p[i] = 1;
            v[k] = i;
            if(k < n-a+1) {
                back(k + 1);
            }
            else {
                afisare();
            }
            p[i] = 0;
        }
    }
}

int main() {
    cin >> a >> n;

    back(1);
}

#include <iostream>

using namespace std;

int n, res[20], frec[20];

void afisare() {
    for(int i = 1;i<=n;i++) cout << res[i] << ' ';
    cout << '\n';
}

void back(int k) {
    for(int i = 1;i<=n;i++) {
        res[k] = i;
        
        if(!frec[i]) {
            frec[i] = 1;
            
            if(k < n) {
                back(k + 1);
            }
            else {
                if(res[n/2+1] == n) afisare();
            }
            
            frec[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    back(1);

    return 0;
}

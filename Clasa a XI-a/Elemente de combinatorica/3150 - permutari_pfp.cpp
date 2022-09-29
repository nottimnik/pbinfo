#include <iostream>

using namespace std;

int n , m , x[30] , cnt , p[30];

int afisare() {
    
    int pp = 1;
    for(int i = 1 ; i <= n ; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
        }
        else { 
            cout << x[pp++] << " ";
        }
    }
    cout << '\n';
}


void back(int k) {
    
    for(int i = 1 ; i <= n ; i += 2) {
        if(!p[i]) {
            x[k] = i;
            p[i] = 1;
            if(k == cnt) {
                afisare();
            }
            else {
                back(k + 1);
            }
            p[i] = 0;
        }
    }
    
}

int main()
{
    cin >> n;
    
    if(n % 2 == 0) {
        cnt = n  / 2;
    }
    else {
        cnt = (n + 1) / 2;
    }
    
    back(1);
    return 0;
}

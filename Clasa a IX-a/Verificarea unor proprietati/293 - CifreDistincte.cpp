#include<iostream>
using namespace std;

int frec[1001];

bool cifre(int a) {
    
    int frec[1001];
    frec[0] = frec[1] = frec[2] = frec[3] = frec[4] = frec[5] = frec[6] = frec[7] = frec[8] = frec[9] = 0;
    
    while(a) {
        frec[a%10] += 1;
        a /= 10;
    } 
    
    
    for(int i = 0;i<=9;i++) {
        if (frec[i] > 1) return false;
    }
    
    
    return true;
}

int main() {
    int n, v[1001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    bool adv = true;
    
    for(int i = 1;i<=n;++i) {
        if(!cifre(v[i])) adv = false;
    }
    
    if(adv == true) {
        cout << "DA";
    }
    else {
        cout << "NU";
    }
    return 0;
}

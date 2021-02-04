#include<iostream>

using namespace std;

int v[1001];

bool suma(int a, int b) {
    int sum1 = 0;
    int sum2 = 0;
    while(a) {
        sum1 += a % 10;
        a /= 10;
    }
    while(b) {
        sum2 += b % 10;
        b /= 10;
    }
    if(sum1==sum2) {
        return true;
    }
    return false;
}

int main() {
    int n; cin >> n;
    for(int i = 0;i<n;++i) {
        cin >> v[i];
    }

    int cnt = 0;
    for(int i = 1;i<n;++i) {
        if(suma(v[i],v[i-1])) {
            ++cnt;
        }
    } 
    cout << cnt;
    return 0;
}

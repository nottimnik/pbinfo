#include <iostream>

using namespace std;

bool prim(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}


int main() {
    int v[1001], n;
    cin >> n;
    
    for(int i = 0;i<n;i++) {
        cin >> v[i];
        if(prim(v[i])) v[i] = 0;
    }
    
    for(int i = 0;i<n;i++) {
        cout << v[i] << ' ';
    }
    
    return 0;
}

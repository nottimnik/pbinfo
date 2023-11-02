#include <iostream>

using namespace std;

int main() {
    int v[1001], n, max = 0, min = 100000, maxI, minI;
    cin >> n;
    
    for(int i = 0;i<n;i++) {
        cin >> v[i];
        
        if(v[i] > max) {
            max = v[i];
            maxI = i;
        }
        if(v[i] < min) {
            min = v[i];
            minI = i;
        }
    }
    
    if(maxI < minI) swap(maxI, minI);
    
    for(int i = minI;i<=maxI;i++) {
        cout << v[i] << ' ';
    }
    
    
    return 0;
}

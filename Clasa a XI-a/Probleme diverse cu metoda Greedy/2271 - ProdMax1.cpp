#include<iostream>
using namespace std;

long long int n, v[100001], max1 = 0, max2 = 0, min1 = 100000001, min2 = 100000001;

int main() {
    
    cin >> n;
    
    for(int i = 0;i<n;++i) {
        int k;
        cin >> k;
        if(k > max1) {
            max2 = max1;
            max1 = k;
        }
        else if(k > max2) {
            max2 = k;
        }
        
        if(k < min1) {
            min2 = min1;
            min1 = k;
        }
        else if(k< min2) {
            min2 = k;
        }
    }
    
    if(max1 * max2 > min1 * min2) {
        cout << max1 * max2;
        return 0;
    }
    
    cout << min1 * min2;
}

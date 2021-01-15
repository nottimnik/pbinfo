#include<iostream>
using namespace std;

int main() {
    int k = 1, min = 1000000001;
    cin >> k;
    if(k > 0) {
        min = k;
    }
    while(k) {
        cin >> k;
        if(k > 0 && k < min) {
            min = k;
        }
    }
    if(min==1000000001) {
        cout << "NU EXISTA";
        return 0;
    }
    
    cout << min;
    return 0;
}

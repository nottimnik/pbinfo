#include<iostream>
using namespace std;
int main() {
    int n;
    int v[1001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    for(int i = 1;i<=n;++i) {
        if(i%2==0) {
            cout << v[i] << " ";
        }
    }
    cout << endl;
    for(int i = n;1<=i;--i) {
        if(i%2==1) {
            cout << v[i] << " "; 
        }
    }
    return 0;
}

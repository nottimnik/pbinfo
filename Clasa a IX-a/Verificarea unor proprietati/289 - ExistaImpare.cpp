#include<iostream>
using namespace std;
int main() {
    int n, v[1001];
    cin >> n;
    bool pare = false;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
        if(v[i]%2==1) {
            pare = true;
        }
    }
    if (pare==true) {
        cout << "DA";
    }
    else {
        cout << "NU";
    }
    return 0;
}

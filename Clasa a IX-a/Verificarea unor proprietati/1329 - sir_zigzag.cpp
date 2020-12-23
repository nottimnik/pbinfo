/// a > b < c > d - cazul 1
/// a < b > c < d - cazul 2
#include <iostream>
using namespace std;
int main() {
    int n, v[1001];
    cin >> n;
    bool adevar = true;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }

    ///vedem ce caz luam
    int cazul = 0;
    if(v[1]>v[2]) {
        cazul = 1;
    }
    else if(v[1]<v[2]) {
        cazul = 2;
    }
    else {
        adevar = false;
    }

    ///Cazul 1:
    if(cazul == 1) {
        for(int i = 2;i<=n;++i) {
            if(i%2==0) {
                if(v[i-1]<v[i]) {
                    adevar = false;
                }
            }
            else {
                if(v[i-1]>v[i]) {
                    adevar = false;
                }
            }
        }
    }

    ///Cazul 2:
    if(cazul == 2) {
        for(int i = 2;i<=n;++i) {
            if(i%2==0) {
                if(v[i-1]>v[i]) {
                    adevar = false;
                }
            }
            else {
                if(v[i-1]<v[i]) {
                    adevar = false;
                }
            }
        }
    }

    if(adevar==true) {
        cout << "DA";
    }
    else {
        cout << "NU";
    }

    return 0;
}

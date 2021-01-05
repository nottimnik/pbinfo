#include<iostream>
using namespace std;
int main() {
    int n, v[1001], max = 0, poz = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
        if(v[i]>max) {
            max = v[i], poz = i;
        }
    }
    for(int i = 1;i<=n;++i) {
        if(i<=poz) {
            for(int j = i + 1;j<=poz;++j) {
                if(v[i]>v[j]) {
                    swap(v[i],v[j]);
                }
            }
        }
        else {
            for(int j = i + 1;j<=n;++j) {
                if(v[i]<v[j]) {
                    swap(v[i],v[j]);
                }
            }
        }
    }
    for(int i = 1;i<=n;++i) {
        cout << v[i] << " ";
    }
    return 0;
}

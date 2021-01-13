#include<iostream>
using namespace std;

int v[101][101], n, m;
int rasp[101], nr = 0;

int main() {
    cin >> n >> m;
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {
            cin>>v[i][j];
        }
    }
    int sum = 0, cnt = 0;
    for(int i = 1;i<=n;++i) {
        int suma = 0;
        for(int j = 1;j<=m;++j) {
            if(v[i][j]%2==0) {
                ++suma;
            }
        }
        if(suma>sum) {
            nr = 0, cnt = 0;
            sum = suma;
            rasp[++nr] = i;
            ++cnt;
        }
        else if(suma==sum) {
            ++cnt;
            rasp[++nr] = i;
        }
    }
    for(int i = 1;i<=cnt;++i) {
        cout << rasp[i] << " ";
    }
    return 0;
}

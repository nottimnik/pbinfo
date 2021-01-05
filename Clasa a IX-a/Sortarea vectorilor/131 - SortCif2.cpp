#include<fstream>
using namespace std;

ifstream cin("sortcif2.in");
ofstream cout("sortcif2.out");

int main() {
    int n, v[1001], c[1001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
        int a = v[i], pc = 0;
        while(a) {
            pc = a % 10;
            a /= 10;
        }
        c[i] = pc;
    }
    for(int i = 1;i<=n;++i) {
        for(int j = i + 1;j<=n;++j) {
            if(c[i]>c[j]) {
                swap(v[i],v[j]), swap(c[i],c[j]);
            }
        }
    }
    for(int i = 1;i<=n;++i) {
        cout << v[i] << " ";
    }
    return 0;
}

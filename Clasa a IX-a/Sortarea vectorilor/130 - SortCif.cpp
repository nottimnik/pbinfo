#include<fstream>
using namespace std;

ifstream cin("sortcif.in");
ofstream cout("sortcif.out");

int main() {
    int n, v[1001], s[1001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
        int a = v[i], sum = 0;
        while(a) {
            sum += a % 10;
            a /= 10;
        }
        s[i] = sum;
    }
    for(int i = 1;i<=n;++i) {
        for(int j = i + 1;j<=n;++j) {
            if(s[i]>s[j]) {
                swap(s[i],s[j]), swap(v[i],v[j]);
            }
        }
    }
    for(int i = 1;i<=n;++i) {
        cout << v[i] << " ";
    }
    return 0;
}

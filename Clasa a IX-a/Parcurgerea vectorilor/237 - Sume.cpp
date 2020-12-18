#include<fstream>
using namespace std;

ifstream cin("sume.in");
ofstream cout("sume.out");

int main() {
    int n, v[1001], sum = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
        sum += v[i];
    }
    cout << sum << endl;
    for(int i = n;1<i;--i) {
        sum -= v[i];
        cout << sum << endl;
    }
    return 0;
}

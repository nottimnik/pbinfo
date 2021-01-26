#include<fstream>
#include <algorithm>
#include<vector>
using namespace std;

ifstream cin("interclasare1.in");
ofstream cout("interclasare1.out");

int main() {
    vector <int> a;
    int n, m;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        int k;
        cin >> k;
        a.push_back(k);
    }
    cin >> m;
    for(int i = 1;i<=m;++i) {
        int k;
        cin >> k;
        a.push_back(k);
    }
    sort(a.begin(), a.end());
    int cnt = 0;
    for(int i = 0;i<=m+n-1;++i) {
        ++cnt;
        cout << a[i] << " ";
        if(cnt%10==0) {cout << endl;}
        if(a[i]==a[i+1]) {
            ++i;
        }
    }
    return 0;
}

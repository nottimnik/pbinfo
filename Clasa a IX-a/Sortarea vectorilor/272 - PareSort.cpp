#include<fstream>
using namespace std;

ifstream cin("paresort.in");
ofstream cout("paresort.out");

int main() {
    int n, k, v[1001], cnt = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> k;
        if(k % 2 == 0) {
            ++cnt;
            v[cnt] = k;
        }
    }
    if(cnt == 0) {
        cout << "nu exista";
        return 0;
    }
    else {
        cout << cnt << endl;
        for(int i = 1;i<=cnt;++i) {
            for(int j = i + 1;j<=cnt;++j) {
                if(v[i]>v[j]) {
                    swap(v[i],v[j]);
                }
            }
        }

        for(int i = 1;i<=cnt;++i) {
            cout << v[i] << " ";
        }
        return 0;
    }
}

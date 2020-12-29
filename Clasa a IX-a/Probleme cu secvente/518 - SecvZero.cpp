#include<iostream>
using namespace std;
int main() {
    int n, v[1001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    
    int min = 0, max = 0;
    for(int i = 1;i<=n;++i) {
        if(v[i]==0) {
            int cnt = 0;
            for(int j = i;v[j]==0;++j) {
                ++cnt;
            }

            if(cnt > max - min + 1) {
                min = i;
                max = cnt + i - 1;
            }
        }
    }
    cout << min << " " << max;
    return 0;
}

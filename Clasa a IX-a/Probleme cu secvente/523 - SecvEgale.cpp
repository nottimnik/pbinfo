#include<iostream>
using namespace std;
int main() {
    int n, v[1001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    int max = 0, min = 0, val = 0;
    for(int i = 2;i<=n;++i) {
        int cnt = 0;
        for(int j = i;v[j]==v[i];++j) {
            ++cnt;
        }
        if(cnt > max - min + 1) {
            min = i;
            max = cnt + min - 1;
            val = v[i];
        }
        if(cnt == max - min + 1) {
            if(v[i] > val) {
                min = i;
                max = cnt + min - 1;
                val = v[i];
            }
        }
    }
    cout << min << " " << max;
    return 0;
}

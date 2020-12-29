#include<iostream>
using namespace std;
int main() {
    int n, v[1001];
    cin >> n;
    int cnt = 1, min = 0, max = 0;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
        if(v[i]%2==1 && cnt == 1) {
            min = i;
            ++cnt;
        }
        if(v[i]%2==1 && cnt == 2) {
            max = i;
        }
    }

    int sum = 0;

    for(int i = min;i<=max;++i) {
        sum += v[i];
    }
    cout << sum;
    return 0;
}

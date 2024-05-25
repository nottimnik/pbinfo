#include <iostream>

using namespace std;

int adiacenta[1001][1001], grade[1001];

int main() {
    int n, k, a, b;
    cin >> n >> k;
    for(int i = 1;i<=n;i++) 
            for(int j = 1;j<=n;j++) adiacenta[i][j] = adiacenta[j][i] = 1;
    
    for(int i = 1;i<=n;i++) {
            for(int j = 1;j<=n;j++) 
                if(i % k == j % k) adiacenta[i][j] = adiacenta[j][i] = 0;
        
    }
    int res = 0;
    for(int i = 1;i<=n;i++) {
        for(int j = 1;j<=n;j++) 
            cout<<adiacenta[i][j]<<' ';
        cout<<endl;
    }
    
    return 0;
}

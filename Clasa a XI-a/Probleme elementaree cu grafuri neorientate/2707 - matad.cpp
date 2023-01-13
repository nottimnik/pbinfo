#include <iostream>

using namespace std;

long long int n, m, a[1001][1001];

int main()
{
    cin >> n; 
    int adv = 1;

    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
            
            if(i == j && a[i][j] != 0) {
            	adv = 0;   
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j<=n; j++) {
            
            if(a[i][j] < 0 || a[i][j] > 1) adv = 0;
            
            if(a[i][j] != a[j][i]) {
                adv = 0;
            }
        }
    }
    
    cout << adv;
    
    return 0;
}

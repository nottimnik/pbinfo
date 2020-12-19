#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1001];
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    for(int i = 1; i <= n; ++i){
        int ca = a[i];
        int d = 2, cnt = 1;
        while(ca > 1){
            int p = 0;
            while(ca % d == 0)
                ca /= d, p++;
            cnt *= (p + 1);
            d++;
            if(d * d > ca)
                d = ca;
        }
        if(cnt == 2){
            for(int j = i + 1; j <= n; ++j)
                a[j-1] = a[j];
            n--;
            i--;
        }
    }

    for(int i = 1; i <= n; ++i)
        cout << a[i] << " ";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        int x, sumcif=0;
        cin >> x;
        int cx = x;
        while(x){
            sumcif += x % 10;
            x /= 10;
        }
        x = cx;
        int cn = 1, d = 2;
        while(x > 1){
            int p = 0;
            while(x % d == 0)
                x/=d, p++;
            cn = cn * (p + 1);
            d++;
            if(d * d > x)
                d = x;
        }
        if(cn == 2){
            d = 2;
            cn = 1;
            while(sumcif > 1){
                int p = 0;
                while(sumcif % d == 0)
                    sumcif/=d, p++;
                cn = cn * (p + 1);
                d++;
                if(d * d > sumcif)
                    d = sumcif;
            }
            if(cn == 2)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}

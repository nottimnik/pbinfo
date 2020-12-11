#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unsigned long long suma = 0;
    for(int i = 1; i <= n; ++i){
        int x;
        cin >> x;
        int ogl = 0;
        while(x){
            ogl = ogl * 10 + x % 10;
            x/=10;
        }
        for(int d = 1; d * d <= ogl; ++d){
            if(ogl % d == 0)
                suma += d, suma += ogl/d;
            if(d * d == ogl)
                suma -= d;
        }
    }
    cout << suma;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[501];
    int rez[11];
    for(int i = 1; i <= n; ++i){
        int nelem;
        cin >> nelem;
        for(int j = 1; j <= nelem; ++j)
            cin >> a[j];
        bool crescator = true;
        for(int j = 2; j <= nelem; ++j)
            if(a[j] < a[j-1])
                crescator = false;
        if(crescator)
            rez[i] = 1;
        else
            rez[i] = 0;
    }

    for(int i = 1; i <= n; ++i)
        cout << rez[i] << ' ';

    return 0;
}

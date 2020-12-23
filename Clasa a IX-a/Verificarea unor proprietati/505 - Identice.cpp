#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001], b[1001];
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = 1; i <= n; ++i)
        cin >> b[i];

    bool ok = true;

    for(int i = 1; i <= n; ++i){
        bool gasit = false;
        for(int j = 1; j <= n; ++j)
            if(a[i] == b[j] && !gasit)
                gasit = true, b[j] = -1;
        if(!gasit)
            ok = false;
    }

    if(ok)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}

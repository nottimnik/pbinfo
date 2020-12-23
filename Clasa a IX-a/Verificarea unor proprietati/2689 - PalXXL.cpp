#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001];
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    for(int i = 1; i <= n; ++i)
        cout << a[i];

    cout << endl;

    bool pal = true;

    for(int i = 1, j = n; i < j; ++i, --j)
        if(a[i] != a[j])
            pal = false;

    if(pal)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}

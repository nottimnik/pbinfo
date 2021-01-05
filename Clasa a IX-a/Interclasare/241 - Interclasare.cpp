#include <fstream>
using namespace std;

ifstream cin("interclasare.in");
ofstream cout("interclasare.out");

int main()
{
    int n, m, k = 0;
    int a[100001], b[100001], c[200001];
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    cin >> m;
    for(int i = 1; i <= m; ++i)
        cin >> b[i];

    int i = 1, j = 1;

    while(i <= n && j <= m)
        if(a[i] < b[j])
            c[++k] = a[i], i++;
        else
            c[++k] = b[j], j++;

    while(i <= n)
        c[++k] = a[i], i++;

    while(j <= m)
        c[++k] = b[j], j++;

    for(int i = 1; i <= k; ++i){
        cout << c[i] << " ";
        if(i % 10 == 0)
            cout << endl;
    }

    return 0;
}

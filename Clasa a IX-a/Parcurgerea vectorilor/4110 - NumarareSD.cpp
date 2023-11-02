#include<iostream>
using namespace std;

int main()
{
    int v1[1001], v2[1001];
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int suma = 0;
        cin >> v1[i];
        for(int d = 1;d * d <= v1[i]; d++)
            if (v1[i] % d == 0)
            {
                suma += d;
                suma += v1[i] / d;
                if (d * d == v1[i])
                    suma -= d;
            }
        v2[i] = suma;
    }
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v2[i] == v2[j])
                cnt++;
    cout << cnt;
    return 0;

}

#include <bits/stdc++.h>

using namespace std;

int n , x[30] , p[30] , cnt;
char cuv[30] , s[30];

int voc(char a)
{
    return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
}

int afisare()
{
    int pp = 1;
    for(int i = 1 ; i <= n ; i++)
        cout << s[x[i] - 1];
    cout << '\n';
}

void back(int k)
{
    for(int i = 1 ; i <= n ; i++)
        if(!p[i])
        {
            x[k] = i;
            p[i] = 1;
            if(voc(s[x[1] - 1]))
                if(k == n)
                 {
                    if(voc(s[x[k] - 1]))afisare();
                    }
            else back(k + 1);
            p[i] = 0;
        }
}

int main()
{
    cin >> s;
    n = strlen(s);

    for(int i = 0 ; i < n ; i++)
        for(int j = i + 1 ; j < n ; j++)
            if(s[i] > s[j]) swap(s[i] , s[j]);

    back(1);

}

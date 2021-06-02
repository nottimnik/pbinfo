#include <bits/stdc++.h>
#include <string.h>
using namespace std;
char sir[300] , vocale[]="aeiou";
char consoane[]="bcdfghjklmnpqrstvwxyz";
int nr=0;
int main()
{
    cin.get(sir,300);
    for(int i = 1 ; i < strlen(sir)-1 ; ++i)
        if(strchr(vocale,sir[i]) && strchr(consoane, sir[i-1]) && strchr(consoane, sir[i+1]))
            nr++;
    cout << nr;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int f[6];
char ch[256];
int main()
{
    cin.getline(ch , 256);
    int i = 0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='a' || ch[i]=='A') f[1]++;
        else if(ch[i]=='e' || ch[i]=='E') f[2]++;
        else if(ch[i]=='i' || ch[i]=='I') f[3]++;
        else if(ch[i]=='o' || ch[i]=='O') f[4]++;
        else if(ch[i]=='u' || ch[i]=='U') f[5]++;
        i++;
    }
    int max=0 , val=0;
    
    for(int i = 1 ; i <= 5 ; ++i) {
        if(f[i]>max) max=f[i] , val=i;
    }
    if(val==1) cout << 'A';
    if(val==2) cout << 'E';
    if(val==3) cout << 'I';
    if(val==4) cout << 'O';
    if(val==5) cout << 'U';
    return 0;
}

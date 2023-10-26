#include <iostream>
#include <cstring>
using namespace std;

char s[256];
int v[26];

int main(){
    cin.getline(s,256);
    for(int i=0;s[i];++i)
        if(s[i]>='a' && s[i]<='z')
            if(v[s[i]-'a']==0)
                cout << s[i] << " ", v[s[i]-'a'] = 1;
    return 0;
}

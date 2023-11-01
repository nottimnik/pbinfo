#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream fin("inlocuirecuvant.in");
ofstream fout("inlocuirecuvant.out");

int main(){
    char a[20],b[20],s[500],*p;
    fin >> a >> b;
    fin.getline(s,500);
    fin.getline(s,500);
    p = strstr(s,a);
    while(p){
        if( (p==s || *(p-1)==' ') && (*(p+strlen(a))<'a' || *(p+strlen(a))>'z') ){
            char t[500];
            strcpy(t,p+strlen(a));
            strcpy(p,b);
            strcpy(p+strlen(b),t);
            p = strstr(p+strlen(b) , a);
        }
        else
            p = strstr(p+strlen(a) , a);
    }
    fout << s << endl;
    return 0;
}

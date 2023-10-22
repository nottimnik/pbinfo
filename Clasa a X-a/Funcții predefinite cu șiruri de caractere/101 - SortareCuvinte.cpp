
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

ifstream fin("sortcuv.in");
ofstream fout("sortcuv.out");

int main()
{
    char cuv[1001], m[1001][1001], *p;
    fin.getline(cuv,1001);
    
    int ind = 0;
    
    p = strtok(cuv, " ");
    while(p) {
        strcpy(m[ind++], p);
        p = strtok(NULL, " ");
    }
    
    for(int i = 0;i<ind;++i) {
        for(int j = i + 1;j<ind; ++j) {
            
            if(strcmp(m[i],m[j]) > 0) {
                
                char aux[1001];
                strcpy(aux, m[i]);
                strcpy(m[i], m[j]);
                strcpy(m[j], aux);
                
            }
            
             
        }
    }
    
    for(int i = 0;i<ind;++i) {
        fout << m[i] << '\n';
    }

    return 0;
}

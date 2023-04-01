#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char a[1001];
    cin.get(a, 1001);
    char voc[12] = "aeiouAEIOU";
    char sep[10] = " ";
    
    char *p = strtok(a, sep);
    while(p) {
        bool consoana = true;
        
        for(int i = 0;p[i];++i) {
            if(strchr(voc, p[i]) == NULL) {
                consoana = false;
            }
        }
        
        if(consoana) cout << p << '\n';
        
        p = strtok(NULL, sep);
    }

    return 0;
}

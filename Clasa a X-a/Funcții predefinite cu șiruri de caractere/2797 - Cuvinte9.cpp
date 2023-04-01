#include <iostream>
#include<cstring>

using namespace std;

int main() {
    char a[1001];
    cin.get(a, 1001);
    char sep[10] = " ";
    int max = 0, nr = 0;
    
    char *p = strtok(a, sep);
    
    while(p) {
        bool esteNR = true;
        int k = 0;
        
        for(int i = 0;p[i];++i) {
            if(isdigit(p[i])) {
                k = k * 10 + int(p[i] - '0');
            }
            else {
                esteNR = false;
            }
        }
        
        if(esteNR) {
            
            int n, cp = k;
            while(cp != 0) {
                n = cp % 10;
                cp /= 10;
            }
            
            if(n > max) {
                max = n;
                nr = k;
            }
        }
        
        p = strtok(NULL, sep);
    }

    if(nr == 0) cout << "nu exista";
    else cout << nr;

    return 0;
}

#include <iostream>
#include <cstring>

using namespace std;

bool palindrom(char a[]) {
    
    int i = 0, j = strlen(a) - 1;
    
    while(i < j) {
        if(a[i] != a[j]) return false;
        i++;j--;
        
    }
    
    return true;
    
}

int main() {
    char a[1001]; cin.getline(a, 1001);
    
    char suf[1001], pre[1001];
    char aux[1001] = { NULL };
    
    for(int i = 0;a[i];i++) {
        aux[i] = a[i];
        if(palindrom(aux)) {
            strcpy(suf, aux);
        }
    }
    
    int lun = strlen(a) - 1;
    char aux2[1001] = { NULL };
    int ind = 0;
    
    for(int i = lun;a[i];i--) {
        aux2[ind] = a[i];
        ind++;
        if(palindrom(aux2)) {
            strcpy(pre, aux2);
        }
    }
    
    cout << suf << ' ' << pre;

    return 0;
}

#include<iostream>
#include<cstring>

using namespace std;

bool pali(char a[1001]) {
    int st = 0, dr = strlen(a) - 1;
    bool palindrom = true;
        
    for( ;st <= dr; ++st, --dr) {
        if(a[st] != a[dr]) {
            palindrom = false;
        }
    }
        
    return palindrom;
}

int main() {
    char a[1001];
    cin.get(a, 1001);
    char sep[10] = " ,.";
    int indice = 0;
    char m[1001][101];
    
    char *p = strtok(a, sep);
    while(p) {
        strcpy(m[++indice], p);
        p = strtok(NULL, sep);
    }
    
    for(int i = 1; i<=indice; ++i) {
        for(int j = i + 1; j<=indice; ++j) {
            if(strcmp(m[i],m[j]) > 0) {
                char tmp[1001];
                strcpy(tmp, m[i]);
                strcpy(m[i], m[j]);
                strcpy(m[j], tmp);
            }
        }
    }
    
    bool gasit = false;
    int nr;
    
 
    
    for(int i = 1; i<=indice && !gasit; ++i) {
        if(pali(m[i])) {
            cout << m[i];
            gasit = true;
        }
        
    }
    
  
    
    if(!gasit) {
        cout << "IMPOSIBIL";
    }
    
    return 0;  
}

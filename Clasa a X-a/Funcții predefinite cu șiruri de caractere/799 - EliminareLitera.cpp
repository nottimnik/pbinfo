#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[1001]; cin.getline(a, 1001);
    
    char nou[1001] = { NULL };
    
    int ok = 0;
    
    char *p = strtok(a, " ");
    
    while(p) {
        
        
        
        
        if(strlen(p) % 2 == 1 && strlen(p) >= 3) {
            
            char tmp[1001];
            strcpy(tmp, p);
            
            int n = strlen(tmp);
            
            strcpy(tmp + n / 2, tmp + n / 2 + 1);
            
            strcat(nou, tmp);
            
            ok = 1;
           
            
        }
        else {
            strcat(nou, p);
        }
        strcat(nou, " ");
        
        p = strtok(NULL, " ");
        
    }
    
    if(!ok) {
        cout << "nu exista"; return 0;
    }
    
    cout << nou;
    

    return 0;
}

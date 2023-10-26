#include <cstring>
#include <iostream>

using namespace std;

char a[256];

int main() {
    cin.getline(a, 256);
    
    char *p = strtok(a, " ");
    
    int n = 0;
    
    while(p) {
        bool gasit = false;
        for(int i = 0;p[i];i++) if(p[i] == 'a') gasit = true;;
        
        if(gasit) n++;
        
        p = strtok(NULL, " ");
    }
    
    cout << n;
    
    

    return 0;
}

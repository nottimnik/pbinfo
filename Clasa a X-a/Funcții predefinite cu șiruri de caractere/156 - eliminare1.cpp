#include <cstring>
#include <iostream>

using namespace std;

char a[51], nou[51] = { NULL };

int main() {
    cin.getline(a, 51);
    
    char *p = strtok(a, " ");
    while(p) {
        
        
        if(isdigit(p[0])) {
            bool number = true;
            for(int i = 0;p[i];i++)
                if(!(isdigit(p[i]))) number = false;
            
            if(!number) strcat(nou, p);
        }
        else {
            strcat(nou, p);
        }
        
        p = strtok(NULL, " ");
    }
    
    
    
    cout << nou;

    return 0;
}

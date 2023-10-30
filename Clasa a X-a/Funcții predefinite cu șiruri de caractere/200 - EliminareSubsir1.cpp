#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[1001], b[1001];
    cin.getline(a, 1001);
    cin.getline(b, 1001);
    int ind = 0;
    
    int n = strlen(b) - 1;
    
    char nou[1001];
    
    bool gasit = false;
    
    for(int i = strlen(a) - 1;a[i];i--) {
        if(a[i] != b[n] && !gasit) nou[ind++] = a[i];
        else {
            
            if(!gasit) {
                int j = i;
                int z = n ;
                
                while(a[j] == b[z]) {
                    j--; z--;
                  
                }
                
              
                
                if(z + 1 == 0) {
                    gasit = true;
                    
                    i-= n ;
                    
                }
                else {
                    nou[ind++] = a[i];
                }
            }
            else {
                nou[ind++] = a[i];
            }
        }
    }

    for(int j = ind - 1;nou[j];j--) {
        cout << nou[j];
    }

    return 0;
}

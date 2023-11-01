#include <iostream>
#include <cstring>

using namespace std;

char a[1001];
char Max[256];

int main() {
    cin.getline(a, 1001);
    strcpy(Max, "");
    
    for(int i = 0;a[i];i++) {
        
        char tmp[1001];
        
        for(int j = 1;a[i+j];j++) {
            strcpy(tmp, a + i);
            tmp[j] = 0;
            
            if(strstr(a+i+1, tmp)) {
                if(strlen(tmp) > strlen(Max)) {
                    strcpy(Max, tmp);
                }
                else {
                    if(strlen(tmp) == strlen(Max)) {
                        if(strcmp(tmp, Max) < 0) {
                            strcpy(Max, tmp);
                        }
                    }
                }
            }
        }
    }
    
    
    cout << Max;
    return 0;
}

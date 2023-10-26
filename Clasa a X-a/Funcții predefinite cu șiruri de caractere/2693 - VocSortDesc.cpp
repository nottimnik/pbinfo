#include <cstring>
#include <iostream>

using namespace std;

char a[256], m[256][256];
int voc[256];

int vocale(char a[]) {
    int nr = 0;
    for(int i = 0;a[i];i++) 
        if(strchr("aeiouAEIOU", a[i])) nr++;
    
    return nr;
}

int main() {
    cin.getline(a, 256);
    
    char *p = strtok(a, " ");
    
    int ind = 0;
    
    while(p) {
        
        strcpy(m[ind], p);
        voc[ind++] = vocale(p);
        p = strtok(NULL, " ");
    }
    
    
    
    for(int i = 0;i<=ind-1;i++) {
        
        for(int j = i + 1;j<=ind-1;j++) {
            if(voc[i] < voc[j]) {
                swap(voc[i], voc[j]);
                swap(m[i], m[j]);
            }
            else if(voc[i] == voc[j]) {
                
                if(strlen(m[i]) < strlen(m[j])) {
                    swap(m[i], m[j]);
                }
                else if(strlen(m[i]) == strlen(m[j]))
                    if(strcmp(m[i],m[j]) > 0) {
                        swap(m[i], m[j]);
                    }
                
            }
        }
    }
    
    for(int i = 0;i<=ind-1;i++) {
        cout << m[i] << '\n';
    }
    

    return 0;
}

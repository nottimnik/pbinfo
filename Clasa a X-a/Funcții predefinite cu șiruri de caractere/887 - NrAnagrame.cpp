#include <iostream>
#include <cstring>

using namespace std;

char a[1001], ultimu[1001], m[1001][1001];

int main() {
    cin.getline(a, 1001);
    
    int ind = 0;
    
    char *p = strtok(a, " ");
    while(p) {
        strcpy(m[ind++], p);
        
        p = strtok(NULL, " ");
    }
    
    for(int i = 0;i<ind-1;i++) {
      if(strcmp(m[i],m[ind-1]) == 0) strcpy(m[i], "\0");
    }
    
    
    for(int i = 0;i<ind;i++) {
      
      for(int j = 0;m[i][j];j++) {
        for(int z = j + 1;m[i][z];z++) {
          if(m[i][j] > m[i][z]) swap(m[i][j], m[i][z]);
        }
      }
      
    }
    
    
    
    int nr = 0;
    
    for(int i = 0;i<ind-1;i++) {
      
      if(strcmp(m[ind-1], m[i]) == 0) nr++;
    }
    
    cout << nr;
    


    return 0;
}

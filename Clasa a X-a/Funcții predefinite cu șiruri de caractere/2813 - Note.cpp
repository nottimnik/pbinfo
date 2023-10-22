#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[1001];
    cin.getline(a, 1001);
    char note[10][10] = {" ", "DO", "RE", "MI", "FA", "SOL", "LA", "SI"};
    
    int n = 7;
    
    bool gasit = false;
    
    char *p = strtok(a, " ");
    while(p) {
        
        bool exista = false;
        
        for(int i = 1;i<=n && exista == false;++i) {
            if(strstr(p, note[i])) {
                cout << p << '\n';
                gasit = exista = true;
            }
        }
        
        
        p = strtok(NULL, " ");
    }
    
    
    if(!gasit) {
        cout << "nu exista";    
    }
    
    
    return 0;
}

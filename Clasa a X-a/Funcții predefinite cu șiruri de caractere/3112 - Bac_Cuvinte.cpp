#include <iostream>
#include <cstring>

using namespace std;



int main()
{
    char a[1001];
    char sep[21] = " ";
    cin.get(a, 1001);
    
    int n; cin >> n;
    int ok = 0;
    
    char *p = strtok(a, sep);
    while(p != NULL) {
        
        if(strlen(p) == n) cout << p << '\n', ok = 1;
        
        
        p = strtok(NULL, sep);
    }
    
    if(!ok) cout << "nu exista";

    return 0;
}



#include <cstring>
#include <fstream>

using namespace std;

ifstream cin("palindrom.in");
ofstream cout("palindrom.out");

int pali(char a[]) {
    
    int p, c;
    p = strlen(a) - 1;
    c = 0;
        
    int ok = 1;
    
    while(c < p) {
            if( a[c] != a[p]) ok = 0;
           
            c++;
            p--;
        }
        
    return ok;
    
}

int main()
{
    int n; cin >> n;
    cin.get();
    char m[1001][1001];
    int max = 0;
    int maxI = 0;
    
    
    for(int i = 0;i<n;++i) {
        char cuv[1001];
        cin.getline(cuv, 1001);
        
        char a[1001] = "";
        
        char *p = strtok(cuv, " ");
        while(p) {
            strcat(a, p);
            p = strtok(NULL, " ");
        }
        
        strcpy(m[i], a);
        
        
        
    }
    
    for(int i = 0;i<n;++i) {
        cout << pali(m[i]) << '\n';
        
    }
    
    
    return 0;
}

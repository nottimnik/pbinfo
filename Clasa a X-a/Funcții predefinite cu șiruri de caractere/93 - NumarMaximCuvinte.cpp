#include <cstring>
#include <fstream>

using namespace std;

ifstream cin("cuvmax.in");
ofstream cout("cuvmax.out");

int main() {
    
    char m[1001][1001];
    int n; cin >> n;
    cin.get();
    
    for(int i = 1;i<=n;++i) {
        cin.getline(m[i], 1001);
    }
    
 
    int max = 0;
    int maxI = 0;
    
    for(int i = 1;i<=n;++i) {
        int nr = 0;
        
        char tmp[1001];
        strcpy(tmp, m[i]);
        
        char *p = strtok(tmp, " ");
        while(p) {
            nr++;
            p = strtok(NULL, " ");
        }
        
        if(nr > max) {
            max = nr;
            maxI = i;
        }
    }
    

    
    cout << m[maxI];


    return 0;
}

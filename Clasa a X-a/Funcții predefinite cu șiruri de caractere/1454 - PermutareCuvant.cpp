#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("permutarecuvant.in");
ofstream cout("permutarecuvant.out");

char a[1001];

int main() {
    cin >> a;
    
    
    cout << a << ' ';
    
    for(int i = 1;i<strlen(a);i++) {
        
        char p = a[0];
        
        char tmp[1001];
        
        strcpy(tmp, a + 1);
        strcpy(a, tmp);
        a[strlen(a)] = p;
        cout << a << ' ';
    }
    
    return 0;
}

#include <cstring>
#include <fstream>

using namespace std;

ifstream cin("lgmax.in");
ofstream cout("lgmax.out");

int main() {
    int n; cin >> n;
    cin.get();
    char m[1001][1001];
    int max = 0;
    int maxI = 0;
    
    
    for(int i = 0;i<n;++i) {
        cin.getline(m[i], 1001);
        if(strlen(m[i]) > max) {
            max = strlen(m[i]);
            maxI = i;
        }
    }
    
    cout << m[maxI];
    return 0;
}

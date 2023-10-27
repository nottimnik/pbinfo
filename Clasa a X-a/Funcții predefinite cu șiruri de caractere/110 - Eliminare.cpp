#include <iostream>
#include <cstring>

using namespace std;


int main() {
    char a[1001];
    cin >> a;
    
    int n = strlen(a);
    
    for(int i = 0;i<n;i++) {
        for(int j = 0; j<n;j++) {
            if(j != i) cout << a[j];
        }
        cout << '\n';
    }
    

    return 0;
}

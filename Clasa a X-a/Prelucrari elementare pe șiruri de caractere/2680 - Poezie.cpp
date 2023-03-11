#include<iostream>
using namespace std;

int main() {
   
   
    int n; cin >> n;
    char sir[300][10001];
    
    for(int j = 0;j<=n;++j) {
        
        cin.getline(sir[j], 10001);
    }
    
    for(int j = 0;j<=n;++j) {
    for(int i = 0; sir[j][i] != '\0'; ++i) { 
        
        if(((int) sir[j][i] == 46 || (int) sir[j][i] == 63 || (int) sir[j][i] == 33 || (int) sir[j][i] == 44) && sir[j][i+1] != '\0') {
                cout << "";
        }
        else {
                cout << sir[j][i];
        }
    }
    if(j > 0) cout << '\n';
        
        
    }
    
}

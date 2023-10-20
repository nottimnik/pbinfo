#include <iostream>
#include <cstring>

using namespace std;



int main()
{
    char a[1001], ca[1001], aux[1001];
   
    
    int n; cin >> n;
    cin.get();
    cin.getline(a, 1001);
    
    for(int i=0;i<=strlen(a) - n;++i) {
        strcpy(ca, a);
        
        strcpy(aux, ca + i + n);
        strcpy(ca + i, aux);
        
        cout << ca << '\n';
    }
    
 
   
    return 0;
}

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[1001], aux[1001];
    cin.getline(a, 1001);
    
 
    for(int i = 0;a[i];i++) {
        if(strchr("aeiouAEIOU", a[i])) {
            strcpy(aux, a + i + 2);
            strcpy(a + i, aux);
        }
    }
 
    cout << a;
    return 0;
}

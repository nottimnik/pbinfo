#include <iostream>
#include <cstring>

using namespace std;



int main()
{
    char a[1001], aux[1001];
    cin.getline(a, 1001);
    
    
    for(int i = 0;a[i];i++) {
        if(strchr("aeiouAEIOU", a[i])) {
            strcpy(aux, a + i);
            strcpy(a + i + 2,aux);
            a[i + 2] = a[i];
            a[i + 1] = 'p';
            i+=2;
        }
    }
    
    cout << a;
    return 0;
}

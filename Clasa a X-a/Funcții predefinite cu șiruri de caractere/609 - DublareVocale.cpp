#include <iostream>
#include <cstring>

using namespace std;



int main()
{
    char a[1001], aux[1001];
    cin.getline(a, 1001);
    
    for(int i = 0;a[i];i++) {
        if(strchr("aeiou", a[i])) {
            strcpy(aux, a + i);
            strcpy(a + i + 1, aux);
            a[i+1] = a[i];
            i++;
        }
    }
    
    cout << a;
    
  

    return 0;
}

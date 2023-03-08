#include <iostream>
using namespace std;

int main()
{
    
    int v[6];
    char sir[10001];
    cin.get(sir, 10001);
    
    for(int i = 0; sir[i] != '\0'; ++i) {
        
       if(sir[i] == 'a' || sir[i] == 'A') v[1]++;
       else if(sir[i] == 'e' || sir[i] == 'E') v[2]++;
       else if(sir[i] == 'i' || sir[i] == 'I') v[3]++;
       else if(sir[i] == 'o' || sir[i] == 'O') v[4]++;
       else if(sir[i] == 'u' || sir[i] == 'U') v[5]++;
    }
    
    int j = 0, max = 0;
    
    for (int i = 1;i<=5;++i) {
        if(v[i] > max) max = v[i], j = i;
    }
    
    if(j == 1) cout << 'A';
    if(j == 2) cout << 'E';
    if(j == 3) cout << 'I';
    if(j == 4) cout << 'O';
    if(j == 5) cout << 'U';

    return 0;
}

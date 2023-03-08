#include <iostream>

using namespace std;

int main()
{
    char sir[10001];
    cin.get(sir, 10001);
    
    for(int i = 0; sir[i] != '\0'; ++i) {
        if(sir[i] == 'a') sir[i] = 'A';
        if(sir[i] == 'e') sir[i] = 'E';
        if(sir[i] == 'o') sir[i] = 'O';
        if(sir[i] == 'i') sir[i] = 'I';
        if(sir[i] == 'u') sir[i] = 'U';
    }
    
    cout << sir;
    return 0;
}

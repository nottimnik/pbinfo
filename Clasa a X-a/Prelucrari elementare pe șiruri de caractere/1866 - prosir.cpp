#include <fstream>
using namespace std;

ifstream cin("prosir.in");
ofstream cout("prosir.out");

int main()
{
    char sir[10001];
    cin.get(sir, 10001);
    
    for(int i = 0; sir[i] != '\0'; ++i) {
        if((((int) sir[i+1]) == 32 && (((int) sir[i])) != 32) || ((int) sir[i+1] == 46)) {
            cout << 5;
            sir[i] = '5';
          
        }
        else {
            cout << sir[i];
        }
        
    }
    

    return 0;
}

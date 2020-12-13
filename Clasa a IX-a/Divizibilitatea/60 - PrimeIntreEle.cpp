#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
        while(b){
            int r = a % b;
            a = b;
            b = r;
        }
        if(a==1) {
           cout << "PIE";
        }
        else {
           cout << "NOPIE";
        }
    return 0;
}

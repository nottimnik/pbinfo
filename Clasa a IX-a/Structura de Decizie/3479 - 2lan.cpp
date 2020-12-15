#include <fstream>

using namespace std;

ifstream cin("2lan.in");
ofstream cout("2lan.out");

int main()
{
    int n;
    cin >> n;
    if(n == 0){
        cout << 1;
        return 0;
    }
    else if(n % 4 == 0)
        cout << 6;
    else if(n % 4 == 3)
        cout << 8;
    else if(n % 4 == 2)
        cout << 4;
    else
        cout << 2;
    return 0;
}

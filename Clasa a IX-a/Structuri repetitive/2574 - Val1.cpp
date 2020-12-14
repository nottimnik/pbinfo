#include <iostream>
using namespace std;

int main()
{
    int n , m;
    cin >> n >> m;
    for(int j = 1 ; j <= n ; ++j){
    for(int i = 1 ; i <= 8 * m ; ++i)
    {
        if(j == 1)
        {
            if(i % 8 == 3 || i % 8 == 5)
                cout << '0';
            else
                cout << '_';
        }
        else if(j == n)
        {
            if(i % 8 == 1 || i % 8 == 7)
                cout << '0';
            else
                cout << '_';
        }
        else
        {
            if(i % 8 == 2 || i % 8 == 6)
                cout << '0';
            else
                cout << '_';
        }
    }
    cout << endl;
}
    return 0;
}

#include <fstream>
using namespace std;

ifstream cin("af.in");
ofstream cout("af.out");

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; ++i)
    {
        long long int x , y , z;
        char c1 , c2;
        cin >> x >> c1 >> y >> c2 >> z;
        if(c1=='+')
            if(x + y == z)
                cout << "Adevarat" << '\n';
            else
                cout << "Fals" << '\n';
        if(c1=='-')
            if(x - y == z)
                cout << "Adevarat" << '\n';
            else
                cout << "Fals" << '\n';
        if(c1=='x')
            if(x * y == z)
                cout << "Adevarat" << '\n';
            else
                cout << "Fals" << '\n';
        if(c1==':' && y != 0)
            if(x / y == z)
                cout << "Adevarat" << '\n';
            else
                cout << "Fals" << '\n';
        else if(c1==':')
                cout << "Fals" << '\n';
    }
    return 0;
}

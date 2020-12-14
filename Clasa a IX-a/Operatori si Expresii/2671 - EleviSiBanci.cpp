#include <iostream>
using namespace std;

int main()
{
    int n , m ,  e, b;
    cin >> n >> m >> e >> b;
    int x = (e + m * b) / (m - n);
    cout << n * x + e << endl << x;
    return 0;
}

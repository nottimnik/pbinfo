#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int produs=1;
    int x;
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> x;
        produs*=x;    
    }
    double rap = (double)1/n;
    cout << fixed << setprecision(2) << pow( produs , rap );
    return 0;    
}

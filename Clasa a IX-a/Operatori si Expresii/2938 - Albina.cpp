#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long sum = 0;
    sum = n * (n - 1) * 3 + 1;
    cout << sum;
    return 0;
}

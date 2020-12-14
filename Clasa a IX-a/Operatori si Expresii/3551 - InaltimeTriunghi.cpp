#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    a *= b;
    double rez = (double) a / c;
    rez = (int) (rez * 100) / 100.;
    cout << fixed << setprecision(2) << rez;
    return 0;
}

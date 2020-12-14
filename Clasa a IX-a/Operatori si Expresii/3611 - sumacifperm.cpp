#include<iostream>
using namespace std;
int main() {
    int n,c1 ,c2 ,c3;
    cin >> n;
    c1 = n % 10;
    c2 = ( n / 10 ) % 10;
    c3 = n / 100;
    //c3 c2 c1;
    cout << c1*100+c2*10+c3+c2*100+c1*10+c3+c2*100+c3*10+c1+c1*100+c3*10+c2+c3*100+c2*10+c1+c3*100+c1*10+c2;
    return 0;
}

#include<fstream>
using namespace std;

ifstream cin("numere8.in");
ofstream cout("numere8.out");

int v[10000];

int main() {
    int n;
    while(cin>>n) {
        if(n <= 9999) 
        	v[n] = 1;
    }

    for(int i = 9999;i>=1;--i) {
        if(v[i]==0) {
            cout << i << " ";
        }
    }
    return 0;
}

#include <fstream>
using namespace std;

ifstream cin("nrcurat.in");
ofstream cout("nrcurat.out");

int advear(int n) {
    int cn = n;
    int oglindit = 0;

    //aflarea oglinditului
    while(n) {
        oglindit = oglindit * 10 + n % 10;
        n /= 10;
    }

    //aflarea urmei lui n
    n = cn;
    int numarul_noua = 0;
    while(n) {
        numarul_noua = numarul_noua * 10 + 9;
        n /= 10;
    }
    n = cn;
    numarul_noua = numarul_noua - n;
    if(numarul_noua == oglindit) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int k;
    for(; cin >> k;){
        if(advear(k) == 1) {
            cout << "1" << " ";
        }
        else {
            cout << "0" << " ";
        }
    }
    return 0;
}

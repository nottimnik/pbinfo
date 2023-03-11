#include <iostream>

using namespace std;

int numar(int n) {
    if(n == 48) return 0;
    if(n == 49) return 1;
    if(n == 50) return 2;
    if(n == 51) return 3;
    if(n == 52) return 4;
    if(n == 53) return 5;
    if(n == 54) return 6;
    if(n == 55) return 7;
    if(n == 56) return 8;
    if(n == 57) return 9;
}

int main() {
    char sir[10001];
    cin.get(sir, 10001);
    int sum = 0, nr = 0;
    
    for(int i = 0;sir[i] != '\0'; ++i) {
        if((int) sir[i] <= 57 && (int) sir[i] >= 48 ) {
            int x = (int) sir[i];
            x = numar(x);
            
            if(nr == 0) {
                nr = x;
            }
            else {
                nr = nr * 10 + x;
            }
        }
        else {
            sum += nr;
            nr = 0;
        }
    }
    cout << sum;
    return 0;
}

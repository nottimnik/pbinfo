#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool nr_unu = false;
    bool nr_zero = false;
    bool nr_alt = false;
    
    while(n) {
        if(n%10==1) {
            nr_unu = true;
        }
        else if(n%10==0) {
            nr_zero = true;
        }
        else{
            nr_alt = true;
        }
        n /= 10;
    }

    if(nr_unu == true && nr_zero == true && nr_alt == false) {
        cout << "da" << endl;
    }
    else {
        cout << "nu" << endl;
    }

    return 0;
}

#include<iostream>
using namespace std;
int main() {
    long long int n = 1, last = 0, cnt = 0;
    while(n!=0) {
        cin >> n;
        if(n==0) {
            continue;
        }
        else {
            if(last!=0) {
                long long int a = n;
                long long int b = last;
                while(b) {
                    int r = a % b;
                    a = b;
                    b = r;
                }
                if (a==1) {
                    ++cnt;
                }
            }
        }
        last = n;
    }
    cout << cnt;
    return 0;
}

#include<iostream>
using namespace std;
int main() {
    int a, b, cnt = 0;
    cin >> a >> b;
    if (a > b){
        swap(a, b);
    }
    for(int i = a;i<=b;++i) {
        int ogl = 0;
        int x = i, cp = i;
        while(x) {
            ogl = ogl * 10 + x % 10;
            x /= 10;
        }
        if(ogl == cp) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}

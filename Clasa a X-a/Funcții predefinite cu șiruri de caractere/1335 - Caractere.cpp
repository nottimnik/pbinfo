#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[1001], b[1001];
    cin >> a >> b;
    
    for(int i = 0;a[i];i++) {
        if(strchr(b, a[i])) {
            cout << a[i];
        }
    }

    return 0;
}

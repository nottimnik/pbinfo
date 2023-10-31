#include <iostream>
#include <cstring>

using namespace std;

char a[1001],b[1001];

int main() {
    cin.getline(a, 1001);
    cin.getline(b, 1001);
    for(int i = 0;a[i];i++) {
        if(a[i] == b[0]) {  
            int j = i;
            int z = 0;
            while(a[j] == b[z] && a[j] != NULL && b[z] != NULL) {
                j++;z++;
            }
            if(z == strlen(b)) i+= z - 1;
            else cout << a[i];
        }
        else {
            cout << a[i];
        }
    }
    return 0;
}

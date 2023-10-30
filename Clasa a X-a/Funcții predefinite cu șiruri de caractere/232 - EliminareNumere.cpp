#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[1001]; cin.getline(a, 1001);
    
    for(int i = 0;a[i];i++) {
        
        if(isdigit(a[i])) {
            
            bool zecimala = false;
            int lun = 0;
            
            int j = i;
            
            while(isdigit(a[j]) || a[j] == '.') {
                if(a[j] == '.') zecimala = true;
                j++;
                lun++;
            }
            
            if(zecimala) i += lun - 1;
            else {
                j = i;
                while(isdigit(a[j])) {
                    cout << a[j];
                    j++;
                }
                i += lun - 1;
            }
            
        }
        else {
            cout << a[i];
        }
        
    }

    return 0;
}

#include <cstring>
#include <iostream>

using namespace std;

char a[151];

int main() {
    cin.getline(a, 151);
    int nr = 0;
    
    char *p = strtok(a, " ");
    
    while(p) {
        if(strlen(p)-1 == 0 and strchr("aeiouAEIOU", p[0])) nr++;
        else if(strchr("aeiouAEIOU", p[0]) and strchr("aeiouAEIOU", p[strlen(p)-1])) nr++;
        p = strtok(NULL, " ");
    }
    
    cout << nr;

    return 0;
}

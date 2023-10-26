#include <cstring>
#include <iostream>

using namespace std;

char m[1001][1001], nou[1001] = { NULL };

int main() {
    int n; cin >> n;
    cin.get();
    for(int i = 0;i<n;i++) cin.getline(m[i], 1001);
    int k; cin >> k; cin.get();
    
    for(int i = 0;i<n;i++) 
        if(strlen(m[i]) == k) strcat(nou, m[i]), strcat(nou, " ");
    
    for(int i = 0;i<n;i++)
        if(strlen(m[i]) != k) strcat(nou, m[i]), strcat(nou, " ");
    
    cout << nou;

    return 0;
}

#include <cstring>
#include <fstream>

using namespace std;

ifstream cin("pbinfo.in");
ofstream cout("pbinfo.out");

char link[1001], m[1001][1001];
int main() {
    cin.getline(link, 1001);
    
    int n; cin >> n;
    cin.get();
    bool DA = false;
    for(int i = 1;i<=n;i++) {
        cin.getline(m[i], 1001);
        
        if(strstr(link, m[i])) DA = true;
        if(strcmp(m[i], "virus") == 0) DA = true;
    }
    
    if(strstr(link, "virus")) { cout << "DA"; return 0; }
    
    if(DA) cout << "DA";
    else cout << "NU";
    

    return 0;
}

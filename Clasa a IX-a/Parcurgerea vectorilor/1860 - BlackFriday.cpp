#include<fstream>
using namespace std;

ifstream cin("blackfriday.in");
ofstream cout("blackfriday.out");

int main() {
    int n, p[1001], ie[1001], max = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> p[i];
    }   
    for(int i = 1;i<=n;++i) {
        cin >> ie[i];
    }
    double ieftin = 1;
    for(int i = 1;i<=n;++i) {
        int a = p[i];
        int b = ie[i];
        double proc = (double) a / b;
        if (proc > ieftin) {
            ieftin = proc;
            max = i;
        }
    }       
    cout << max;
    return 0;
}

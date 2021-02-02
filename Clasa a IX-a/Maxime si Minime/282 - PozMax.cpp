#include <fstream>
using namespace std;

ifstream cin("pozmax.in");
ofstream cout("pozmax.out");

int main() {
    double max = 0; int apariti1 = 0, apariti2 = 0;
    int n; cin >> n; int cnt = 1;
    for(int i = 1;i<=n;++i) {
        double k; cin >> k;
        if(k > max) {
            max = k;
            apariti1 = i;
            apariti2 = 0;
        }
        else if(max == k){
            apariti2 = i;
        }
    }
    cout << apariti1 << " " << apariti2;
    return 0;
}

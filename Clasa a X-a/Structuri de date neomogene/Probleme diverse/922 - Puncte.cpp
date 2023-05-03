#include <iostream>
#include <cmath>
using namespace std;

struct punct {
  int x, y;  
};

int main() {
    punct v[1001];
    int n; cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i].x >> v[i].y;
    }
    
    float max = 0;
    
    for(int i = 1;i<=n;++i) {
        if(sqrt(v[i].x * v[i].x + v[i].y * v[i].y) > max ) {
            max = sqrt(v[i].x * v[i].x + v[i].y * v[i].y);
        }
    }
    
    int nr = 0;
    
    for(int i = 1;i<=n;++i) {
        if((float) sqrt(v[i].x * v[i].x + v[i].y * v[i].y) == max ) {
            nr++;
        }
    }
    
    cout << max << ' ' << nr;

    return 0;
}

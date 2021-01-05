#include<iostream>
#include<cmath>
using namespace std;
int patrat(int u) {
    double vector = sqrt(u);
    if((int)vector == (double)vector) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n, v[1001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    for(int i = 1;i<=n;++i) {
        if(patrat(v[i])) {
            for(int j = i + 1;j<=n;++j) {
                if(patrat(v[j]) && v[i]>v[j]) {
                    swap(v[i],v[j]);
                } 
            }
        }
    }
    for(int i = 1;i<=n;++i) {
        cout << v[i] << " ";
    }
    return 0;
}

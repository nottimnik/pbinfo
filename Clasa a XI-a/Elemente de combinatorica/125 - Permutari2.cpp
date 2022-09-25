#include <fstream>

using namespace std;

ifstream cin("permutari2.in");
ofstream cout("permutari2.out");

int n, v[100001], p[1000001], a[1000001];

void afisare() {
    for(int i = 1;i<=n;++i) {
        cout << v[i] << ' ';
    }
    cout << '\n';
}


void back(int k) {
    
    for(int i = 1;i<=n;++i) {
        
        if(!p[i]) {
            
        v[k] = a[i];
        p[i] = 1;
        
        if(k < n) {
            back(k+1);
        }
        else {
            afisare();
        }
        p[i] = 0;
        
        }
    }
}

int main()
{
    cin >> n;
    
    for(int i = 1;i<=n;++i) {
        cin >> a[i];
    }
    
    //ordonare
    
    for(int i = 1;i<=n;++i) {
        for(int j = i + 1;j<=n;++j) {
            if(a[i] > a[j]) {
                swap(a[i],a[j]);
            }
        }
    }
    
    back(1);

    return 0;
}

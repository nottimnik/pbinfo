#include<fstream>
using namespace std;

ifstream cin("interschimbarelinii.in");
ofstream cout("interschimbarelinii.out");


int v[1001][1001];

int main() {
    int n, m;
    cin >> n >> m;
    int max_sum = 0, index_max = 0;
    int min_sum = 9999999, index_min = 0;
    for(int i = 0;i<n;++i) {
        int sum = 0;
        for(int j = 0;j<m;++j){
            cin >> v[i][j];
            sum = v[i][j];
        
        if(v[i][j] > max_sum) {
            max_sum = sum;
            index_max = i;
        }
        if(v[i][j] < min_sum) {
            min_sum = sum;
            index_min = i;
        }
        }
    }
    for(int i = 0;i<n;++i) {
        if(i == index_max) {
            for(int j = 0;j<m;++j) {
                cout << v[index_min][j] << " ";
            }
            cout << endl;
        }
        else if(i == index_min) {
            for(int j = 0;j<m;++j) {
                cout << v[index_max][j] << " ";
            }
            cout << endl;
        }
        else {
            for(int j = 0;j<m;++j) {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

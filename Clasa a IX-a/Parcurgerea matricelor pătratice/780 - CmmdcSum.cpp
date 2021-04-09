#include<iostream>

using namespace std;

int v[21][21];

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;++i) {
        for(int j = 0;j<n;++j) {
            cin >> v[i][j];
        }
    }
    int diagonala = 1;
    int sum1 = 0, sum2 = 0;
    for(int i = 0;i<n;++i) {
        for(int j = diagonala;j<n;++j) {
            sum1 += v[i][j];
        }
        diagonala++;
    }
    
    diagonala = 1;
    for(int i = 1;i<n;++i) {
        for(int j = 0;j<diagonala;++j) {
            sum2 += v[i][j];
        }
        diagonala++;
    }
    
    if(sum1<sum2) {
        swap(sum1, sum2);
    }

    while(sum1!=sum2)
    {
        if(sum1>sum2)
            sum1=sum1-sum2;
        else
            sum2=sum2-sum1;
    }

    cout << sum1;
}

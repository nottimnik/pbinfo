#include<fstream>
using namespace std;

ofstream fout("9lan.out");
ifstream fin("9lan.in");

int main() {
    int n;
    fin >> n;
    if(n==0) {
        fout << 1;
        return 0;
    }
    else if(n%2==0) {
        fout << 1;
        return 0;
    }
    else {
        fout << 9;
    }
    return 0;
}

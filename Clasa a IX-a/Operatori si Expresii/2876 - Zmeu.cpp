#include<fstream>
using namespace std;

ifstream fin("zmeu.in");
ofstream fout("zmeu.out");

int main()
{
    long long int N, M , Z, t;
    fin >> N;
    fin >> M;
    Z =  N / (2 * M);
    fout << Z << endl;
    t = 2 * M - N % (2 * M);
    if (t == 0) {t = 0;
    fout << t;
    }
    else fout << t;
    
}

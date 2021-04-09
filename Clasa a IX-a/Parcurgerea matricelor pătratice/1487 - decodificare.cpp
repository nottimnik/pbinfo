#include<fstream>
#include<string>
using namespace std;

string v[3001][3001];

ifstream fin("decodificare.in");
ofstream fout("decodificare.out");

int main() {
    int n;
    fin >> n;
    string mesaj_codat;
    fin >> mesaj_codat;
    int index = n / 2 - 1;
    string mesaj_decodat;
    int lungime = n / 2;
    mesaj_decodat = mesaj_codat[index];

    for(int i = 1;i<lungime;++i) {
        index += lungime - 1;
        mesaj_decodat += mesaj_codat[index];
    }

    index = 0;
    mesaj_decodat += mesaj_codat[index];
    for(int i = 1;i<lungime;++i) {
        index += lungime+1;
        mesaj_decodat += mesaj_codat[index];
    }

    fout << mesaj_decodat;

    return 0;
}

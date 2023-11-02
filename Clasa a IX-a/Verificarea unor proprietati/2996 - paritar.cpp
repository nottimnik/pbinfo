#include <fstream>
using namespace std;

/**
Afisam DA in cazurile:
- toate numerele din sir sunt pare
- toate numerele din sir sunt impare
- daca sunt in sir si numere pare si impare, atunci
    - maximul par din primele n valori < maximul impar din ultimele n
        si
    - maximul impar din primele n valori < maximul par din ultimele n
Afisam NU in caz contrar
*/

int main()
{
    int n, x, i, M1, m1, M0, m0;
    ifstream  fin("paritar.in");
    ofstream fout("paritar.out");
    fin >> n;

    /// aflam valoarea maxima para si maxima impara din
    /// primele n numere ale sirului
    M1 = M0 = -1;
    for (i = 1; i <= n; i++)
    {
        fin >> x;
        if (x % 2 == 1 && x > M1) M1 = x;
        if (x % 2 == 0 && x > M0) M0 = x;
    }

    /// aflam valoarea minima para si minima impara din
    /// primele n numere ale sirului
    m1 = m0 = 1000001;
    for (i = 1; i <= n; i++)
    {
        fin >> x;
        if (x % 2 == 1 && x < m1) m1 = x;
        if (x % 2 == 0 && x < m0) m0 = x;
    }

    /// in sir sunt doar numere impare
    if (m0 == 1000001 && M0 == -1)
    {
        fout << "DA\n";
        return 0;
    }

    /// in sir sunt doar numere pare
    if (m1 == 1000001 && M1 == -1)
    {
        fout << "DA\n";
        return 0;
    }

    /// in sir sunt si numere pare, si impare
    if (M1 < m0 && M0 < m1)
    {
        fout << "DA\n";
        return 0;
    }

    fout << "NU\n";

    fin.close();
    fout.close();
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int x;
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> x;
        bool gasit=false;
        for(long long int j=1 ; j * j * j <= x ; j++)
            if(j*j*j==x)
                gasit=true;
        if(!gasit)
            for(long long int j = -1 ; j * j * j >= x ; j--)
                if(j * j * j == x)
                    gasit = 1;
        if(gasit)
            cout << "DA" << endl;
        else
            cout << "NU" << endl;
    }
    return 0;
}

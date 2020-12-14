#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int v[11] , p = 0;
    while(n)
    {
        v[p++]=n%10;
        n/=10;
    }
    for(int i = p - 1 ; i >= 0 ; --i)
    {
        if(v[i] == 1)
        {
            cout << "  @\n";
            cout << " @@\n";
            cout << "  @\n";
            cout << "  @\n";
            cout << "@@@@@\n";
            cout << endl;
        }
        if(v[i] == 2)
        {
            cout << "@@@@\n";
            cout << "@  @\n";
            cout << "  @\n";
            cout << " @\n";
            cout << "@@@@\n";cout << endl;
        }
        if(v[i] == 3)
        {
            cout << "@@@@@\n";
            cout << "    @\n";
            cout << "@@@@@\n";
            cout << "    @\n";
            cout << "@@@@@\n";cout << endl;
        }
        if(v[i] == 4)
        {
            cout << "@   @\n";
            cout << "@   @\n";
            cout << "@@@@@\n";
            cout << "    @\n";
            cout << "    @\n";cout << endl;
        }
        if(v[i] == 5)
        {
            cout << "@@@@@\n";
            cout << "@    \n";
            cout << "@@@@@\n";
            cout << "    @\n";
            cout << "@@@@@\n";cout << endl;
        }
        if(v[i] == 6)
        {
            cout << "@@@@@\n";
            cout << "@    \n";
            cout << "@@@@@\n";
            cout << "@   @\n";
            cout << "@@@@@\n";cout << endl;
        }
        if(v[i] == 7)
        {
            cout << "@@@@\n";
            cout << "   @\n";
            cout << "  @@@\n";
            cout << "   @\n";
            cout << "   @\n";cout << endl;
        }
        if(v[i] == 8)
        {
            cout << "@@@@@\n";
            cout << "@   @\n";
            cout << "@@@@@\n";
            cout << "@   @\n";
            cout << "@@@@@\n";cout << endl;
        }
        if(v[i] == 9)
        {
            cout << "@@@@@\n";
            cout << "@   @\n";
            cout << "@@@@@\n";
            cout << "    @\n";
            cout << "    @\n";cout << endl;
        }
        if(v[i] == 0)
        {
            cout << "@@@@@\n";
            cout << "@   @\n";
            cout << "@   @\n";
            cout << "@   @\n";
            cout << "@@@@@\n";cout << endl;
        }
    }
    return 0;
}

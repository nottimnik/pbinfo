#include <fstream>
using namespace std;
ifstream cin("muzical.in");
ofstream cout("muzical.out");
int main()
{
    char ch1 , ch2 , ch3;
    int n;
    cin >> n;
    int s=0;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> ch1 >> ch2;
        if(ch1=='d' && ch2=='o')
        {
        cin >> ch3;
        if(ch3=='1')
        s+=0;
        else
        s+=7;
        }
        if(ch1=='r' && ch2=='e')
        s+=1;
        if(ch1=='m' && ch2=='i')
        s+=2;
        if(ch1=='f' && ch2=='a')
        s+=3;
        if(ch1=='s' && ch2=='o')
        {
            cin >> ch3;
        s+=4;
        }
        if(ch1=='l' && ch2=='a')
        s+=5;
        if(ch1=='s' && ch2=='i')
        s+=6;
    }
    int m=s%8;
    if(m==0)
        cout << "do1";
    if(m==1)
        cout << "re";
    if(m==2)
        cout << "mi";
    if(m==3)
        cout << "fa";
    if(m==4)
        cout << "sol";
    if(m==5)
        cout << "la";
    if(m==6)
        cout << "si";
    if(m==7)
        cout << "do2";
    return 0;    
}

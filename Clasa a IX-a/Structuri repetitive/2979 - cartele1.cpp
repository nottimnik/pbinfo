#include<fstream>
#include<cstdlib>
using namespace std;

ifstream cin("cartele.in");
ofstream cout("cartele.out");

int main()
{
    short int C;
    cin>>C;
    if(C==1)
    {
        int nr_Fete=0,nr_Baieti=0;
        char c,c1;
        int nr,h,m,s;
        cin>>nr;
        for(int i=1; i<=nr; i++)
        {
            cin>>c>>c1>>h>>m>>s;
            if(c=='f')
            {
                if(c1=='e')
                    nr_Fete--;
                else
                    nr_Fete++;
            }
            else
            {
                if(c1=='e')
                    nr_Baieti--;
                else
                    nr_Baieti++;
            }
        }
        cout<<nr_Baieti<<" "<<nr_Fete;
    }
    if(C==2)
    {
        int nr_Fete=0,nr_Baieti=0;
        char c,c1;
        int nr,s1,s2,h,m,s,timp_total=0;
        cin>>nr;
        for(int i=1; i<=nr; i++)
        {
            cin>>c>>c1>>h>>m>>s;
            bool era_egal=false;
            if(nr_Fete!=0&&nr_Fete==nr_Baieti)
                era_egal=true;
            if(c=='f')
            {
                if(c1=='e')
                    nr_Fete--;
                else
                    nr_Fete++;
            }
            else
            {
                if(c1=='e')
                    nr_Baieti--;
                else
                    nr_Baieti++;
            }

            if(i==1)
            {
                s1=0;
                s1+=h*3600;
                s1+=m*60;
                s1+=s;
            }
            else
            {
                s2=0;
                s2+=h*3600;
                s2+=m*60;
                s2+=s;
                if(era_egal)
                    timp_total+=s2-s1;
                s1=s2;
            }
        }
        cout<<timp_total;
    }
    if(C==3)
    {
        int nr_Baieti=0,nr,s1=0,s2,timp_maxim=0;
        char c,c1;
        int h,m,s;
        cin>>nr;
        for(int i=1; i<=nr; i++)
        {
            cin>>c>>c1>>h>>m>>s;
            bool era_impar=false;
            if(nr_Baieti%2==1)
                era_impar=true;

            if(c=='b')
            {
                if(c1=='e')
                    nr_Baieti--;
                else
                    nr_Baieti++;
            }
            if(nr_Baieti%2==1&&s1==0)
            {
                s1+=h*3600;
                s1+=m*60;
                s1+=s;
            }
            else
            {
                s2=0;
                s2+=h*3600;
                s2+=m*60;
                s2+=s;
                if(era_impar&&nr_Baieti%2==0)
                {
                    if(s2-s1>timp_maxim)
                        timp_maxim=s2-s1;
                    s1=0;
                }
            }
        }
        cout<<timp_maxim;
    }
}

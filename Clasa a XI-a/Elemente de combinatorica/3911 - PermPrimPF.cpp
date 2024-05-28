#include<iostream>
using namespace std;

int n,v[16],x[16];

void Citire()
{
    int i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
}

int Prim(int n)
{
    if(n<2)
        return 0;
    if(n%2==0 && n!=2)
        return 0;
    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)
            return 0;
    return 1;
}

void Sortare()
{
    int i,j,aux;
    for(i=1;i<n;i++)
        if(!Prim(v[i]))
            for(j=i+1;j<=n;j++)
                if(!Prim(v[j]))
                    if(v[i]>v[j])
                        aux=v[i],v[i]=v[j],v[j]=aux;
}

void PuncteFixe()
{
    // fixam punctele
    int i;
    for(i=1;i<=n;i++)
        if(Prim(v[i]))
            x[i]=i;
}

void Afisare()
{
    int i;
    for(i=1;i<=n;i++)
        cout<<v[x[i]]<<" ";
    cout<<"\n";
}

int Valid(int k)
{
    int i;
    for(i=1;i<k;i++)
        if(x[i]==x[k])
            return 0;
    return 1;
}

void Backtracking(int k)
{
    if(k>n)
        Afisare();
    else
    {
        if(Prim(v[k]))
            Backtracking(k+1);
        else
        {
            int i;
            for(i=1;i<=n;i++)
                if(!Prim(v[i]))
                {
                    x[k]=i;
                    if(Valid(k))
                        Backtracking(k+1);
                }
        }
    }
}

int main()
{
    Citire();
    Sortare();
    PuncteFixe();
    Backtracking(1);
    return 0;
}

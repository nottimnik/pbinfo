#include <iostream>
using namespace std;

int main()
{
    int i , n , nr_varfuri=0;
    cin>>n; 
    int v[n+1];
    cin>>v[1]>>v[2];
    if(v[1]>v[2]||v[1]==v[2])
    {
        cout<<"NU";
        return 0;
    }
    for(i=3;i<n;i++)
    {
        cin>>v[i];  
        if(v[i]==v[i-1])
        {
            cout<<"NU";
            return 0;
        }
        else if(nr_varfuri==0 && v[i-1]>v[i])
        {
            nr_varfuri++;   
        }
        else if(nr_varfuri==1 && v[i-1]<v[i])
        {
            cout<<"NU";
            return 0;
        }   
    }
    cin>>v[n];
    if(v[n-1]==v[n] || v[n-1]<v[n])
    {
        cout<<"NU";
        return 0;
    }
    cout<<"DA"; 
    return 0;
}

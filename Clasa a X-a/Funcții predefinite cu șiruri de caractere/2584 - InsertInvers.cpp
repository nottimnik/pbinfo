#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss;
    getline(cin,s);
    istringstream buffer(s);
    vector<string> v;
    for(string word;buffer>>word;)
        v.push_back(word);
    for(int i=0;i<v.size();i++)
    {
        s=ss=v[i];
        reverse(ss.begin(),ss.end());
        v.insert(v.begin()+i+1,ss),i++;
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}

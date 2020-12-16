#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("platou1.in");
ofstream fout("platou1.out");

int main()
{
int xmin=10, k=0,lg=1,x,y;
   fin>>x; 

while(fin>>y)
     if(x==y)
         lg++; 
    else
      { 
         if(k<lg)
      {
          k=lg; 
           xmin=x; 
      }
else
      if(k==lg && xmin>x)
          xmin=x;

           lg=1; 
            x=y; 
           }

fout<<k<<" "<<xmin<<endl;

fin.close();
fout.close();

return 0;
} 

#include <iostream>

using namespace std;

int main()

{int n,a=0,b=0,c=0,d=0,e=1,f=0,u,x,l,aux,m,k,z,p;

 cin>>n;

   x=n;aux=n;m=n;k=n;z=n;

   while(n){

       u=n%10;

       a+=u*u;

       n=n/10;}

   while(x){

       u=x%10;

       if(u%2==1){

           b=b+u;

       }

       x=x/10;}

   while(aux){

       u=aux%10;

       if(u%3==0){c+=u;}

       aux=aux/10;}

   while(m){

       u=m%10;

       if(u>5){d++;}

       m=m/10;}

   while(k){

       u=k%10;

       if(u!=0){e=e*u;}

       k=k/10;}

   u=z%10;

   while(z){

       p=z;

       z=z/10;}

   f=p+u;

   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f;

   return 0;

}

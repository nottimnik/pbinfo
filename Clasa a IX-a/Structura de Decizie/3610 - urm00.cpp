#include<iostream>

using namespace std;

int main() {
  long long int n;
  cin >> n;
  
  long long int a = n % 10;
  long long int b = n / 10 % 10;
  
  while(a!=0 || b!=0) {
      
    a = n % 10;
    b = n / 10 % 10;
      
    if(a==0 && b==0) {
      n--;
    }
    ++n;

  }
  cout << n;
  return 0;
}

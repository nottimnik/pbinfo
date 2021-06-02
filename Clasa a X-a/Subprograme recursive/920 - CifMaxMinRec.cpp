void cifmaxmin(int n, int& max, int& min) {
  max = -1, min = 10;
  
  if(n==0) {
    max = 0, min = 0;
  }
  else {
  while(n) {
    if(n%10>max) {
      max = n % 10;
    }
    if(n%10<min) {
      min = n % 10;
    }
    n /= 10;
  }
  }
}

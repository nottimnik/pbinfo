int cifminpar(int n) {
  int min=10, cnt= 0 ;
  if(n==0) {
    return 0;
  }
  else {
    while(n) {
      if(n%10%2==0 && n%10<min) {
        min=n%10;
        ++cnt;
      }
      n /= 10;
    }

    if(cnt==0) {
      return -1;
    }
    else {
      return min;
    }
  }
}

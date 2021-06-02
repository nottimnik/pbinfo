int elimcif(int n, int c) {
  if(n==0) {
    return 0;
  }
  else {
    if(n%10!=c) {
      return n % 10 + elimcif(n/10, c) * 10;
    }
    else {
      return elimcif(n/10, c);
    }
  }
}

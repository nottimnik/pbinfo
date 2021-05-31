int cifmax(int n) {
  if(n==0) {
    return 0;
  }
  else {
    return max(n%10, cifmax(n/10));
  }
}

int nr_cif(int n, int k) {
  int cnt = 0;
  while(n) {
    if (n%10!=0) {
      if(k%(n%10)==0) {
        cnt++;
      }
    }
    n = n / 10;
  }
  return cnt;
}

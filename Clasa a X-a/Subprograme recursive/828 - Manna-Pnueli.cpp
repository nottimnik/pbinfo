int mp(int n) {
  if(n>=12) {
    return n-1;
  }
  else(n<12); {
    return mp(mp(n+2));
  }
}

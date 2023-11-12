int ExistaImpareRec(int n) {
  if((n%10)%2!=0) return 1;
  if(n == 0) return 0;
  return ExistaImpareRec(n/10);
}

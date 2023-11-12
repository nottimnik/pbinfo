long long SumProdRec(int n) {
  	if(n==1 or !n) return 0;
	return (n-1)*n + SumProdRec(n-1);
}

int cnt = 0;
int nr_cif_zero(int n) {
  if(n==0 && cnt == 0) {
    return 1;
  }
  else if(n==0) {
    return 0;      
  }
  else if(n%10==0) {
    ++cnt;  
    return nr_cif_zero(n/10) + 1;
  }
  else {
    ++cnt;  
	return nr_cif_zero(n/10) + 0;        
  }
}

int DifParImpar(int n) {
    if(n<10) {
    	if(n%2==0) return 1;
        else return -1;
    }
    int digit = n % 10;
    if (digit % 2 == 0)
        return 1 + DifParImpar(n / 10); 
    else
        return -1 + DifParImpar(n / 10); 
}

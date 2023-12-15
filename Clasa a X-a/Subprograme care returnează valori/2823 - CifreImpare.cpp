int cifreImpare(int n) {
    int pare = 0, ok = 0;
    int nr = 0, p = 1;
    
    while(n) {
        if((n%10)%2 == 1) 
            ok = 1;
        else {
            nr = (n % 10) * p + nr;
            p *= 10;
            pare = 1;
        }
        
        n /= 10;
    }
    
    if(ok == 0) return -1;
    if(pare == 0) return -1;
    
    return nr;
}

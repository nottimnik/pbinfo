int Impare(int & n) {
    int p = 1, cn = 0;
    while(n) {
        
        
        
        if((n%10)%2==1) {
            cn = cn + ((n % 10) - 1) * p;
        }
        else {
            cn = cn + (n % 10) * p;
        }
        
        p *= 10;
        n /= 10;
        
    }
    
    
    
    n = cn;
}

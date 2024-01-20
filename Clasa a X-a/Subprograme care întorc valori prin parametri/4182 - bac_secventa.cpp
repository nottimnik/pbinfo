int secventa(int & n) {
    int p = 1, cn = 0;
    while(n) {
        if(n % 100 == 22) {
            cn = cn + 0 * p;
            p *= 10;
            cn = cn + 2 * p;
            p *= 10;
            
            n/=100;
            
        }
        else {
            cn = cn + (n % 10) * p;
            n/=10;
            p*=10;
        }
    }
    
    
    
    n = cn;
}

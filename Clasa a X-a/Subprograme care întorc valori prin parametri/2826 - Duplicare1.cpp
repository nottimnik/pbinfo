int duplicare(int n, int & d) {
    
    int p = 1, cn = 0, ok = 0;
    while(n) {
        int cifra = n % 10;
        if(cifra%2==0) {
            
            cn = cn + cifra * p;
            p *= 10;
            ok = 1;
            
        }
        cn = cn + cifra * p;
        p *= 10;
        
        
        n/=10;
    }
    
    if(ok == 0) d = -1;
    else d = cn;
}

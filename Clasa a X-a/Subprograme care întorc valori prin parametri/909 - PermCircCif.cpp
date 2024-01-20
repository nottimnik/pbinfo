int perm(int & n) {
    int p = 1, cn = 0;
    while(n > 9) {
        cn = cn + (n % 10) * p;
        p *= 10;
        n /=10;
        
    } 
    cn = cn * 10 + n;    
    n = cn;
}

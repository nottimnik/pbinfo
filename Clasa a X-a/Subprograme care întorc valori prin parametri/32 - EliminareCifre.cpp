void P(int & n, int c) {
    int p = 1, nr = 0;
    while(n) {
       int cifra = n % 10;
       if(cifra != c) {
           nr = nr + p * cifra;
           p *= 10;
       }
       
       n /= 10;
    }
    
    n = nr;
}

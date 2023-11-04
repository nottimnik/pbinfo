double nreal(int a, int b) {
    int cb = b, nr = 0, p = 1;
    
    while(cb) {
        nr++; cb /= 10; p*=10;
    }
    while(nr) {
        a *= 10; nr--;
    }
    a += b;
    return ((double) a / p);
}

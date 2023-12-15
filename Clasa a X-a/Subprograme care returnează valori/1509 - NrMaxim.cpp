int nrmaxim(int a) {
    int p = 1;
    
    int ca = a;
    while(a) {
        p*=10;
        a /= 10;
    }
    
    p /= 10;
    
    a = ca;
    
    int nr = (a % p) * 10 + (a / p);
    int max = nr;
    while(nr != a) {
        nr = (nr % p) * 10 + (nr / p);
        if(nr > max) max = nr;
    }
    
    return max;
}

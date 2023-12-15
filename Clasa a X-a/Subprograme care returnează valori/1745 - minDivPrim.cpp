int minDivPrim(int n) {
    int nr = 1, d = 2;
    while(n > 1) {
        if(n%d==0) {
            while(n%d==0) 
                n/=d;
            nr *= d;
        }
        
        d++;
        if(n > 1 && d*d>n) d = n;
    }

    return nr;
}

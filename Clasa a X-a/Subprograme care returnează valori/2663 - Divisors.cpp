int NrDiv(int n) {
    int cnt = 0;
    for(int i = 1;i*i<=n;i++) {
        if(n % i == 0) cnt+=2;
        if(i*i==n) cnt--;
    }
        
    return cnt;
}


int NextNrDiv(int n) {
    int nr = n + 1;
    int nr_div = NrDiv(n);
    
    while(NrDiv(nr) != nr_div)
        nr++;
        
    return nr;
}

int PrevNrDiv(int n) {
    int nr_div = NrDiv(n);
    int nr = n - 1;
    
    while(nr>0 && NrDiv(nr) != nr_div) {
        nr--;
    }
    
    if(nr==0) return -1;
    return nr;
}

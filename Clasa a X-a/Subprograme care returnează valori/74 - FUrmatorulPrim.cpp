int prim(int n) {
    int cnt = 0;
    for(int i = 1;i*i<=n;i++) {
        if(n%i==0) cnt+=2;
        if(i*i==n) cnt--;
    }
    
    return cnt == 2;
}

int nr_prim(int n) {
    for(int i = n + 1;i;i++)
        if(prim(i)) return i;
}

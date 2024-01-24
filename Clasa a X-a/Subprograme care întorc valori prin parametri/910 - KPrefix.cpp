void prefix(int n, int k, int & x) {
    int p = 1;
    for(int i = 1;i<=k;i++) p *= 10;
    
    while(n > p-1) {
        n/=10;
    }
    x = n;
}

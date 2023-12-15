bool prim(int n) {
    if(n==0) return 0;
    if(n==1) return 0;
    
    int cnt = 0;
    for(int i = 1;i*i<=n;i++) {
        if(n % i == 0) cnt += 2;
        if(i*i==n) cnt--;
    }
    
    return cnt == 2;
}

int NrPrime(int n) {
    
    int cnt = 0;
    while(n) {
        if(prim(n%10)) cnt++;
        n /= 10;
    }
    
    return cnt;
}

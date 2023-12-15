bool prim(int n){
    int d = 2, cnt = 1;
    while(n > 1){
        int p = 0;
        while(n % d == 0)
            n/=d, p++;
        d++;
        cnt *= (p + 1);
        if(d * d > n)
            d = n;
    }
    return cnt == 2;
}
bool a_prim(int n){
    int cnt = 0;
    for(int d = 2; d * d <= n; ++d){
        if(n % d == 0) cnt+=2;
        if(d * d == n) cnt--;
    }
    if(cnt == 2){
        int a, b;
        for(int i = 2; i * i <= n; ++i)
            if(n % i == 0) a = i, b = n / i;
        if(prim(a) && prim(b)) return 1;
    }
    
    return 0;
}

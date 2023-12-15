int pnumar(int n) {
    
    int sum = 0;
    
    for(int i = 1;i*i<=n;i++) {
        if(n % i == 0) sum+= i + n / i;
        if(i*i == n) sum -= i;
    }
    return n % 2 == sum % 2;
}

int kpn(int a, int b, int k) {
    int nr = 0;
    for(int i = a; i<=b;i++) {
        if(pnumar(i)) nr++;
        if(nr == k) return i;
    }
    return -1;
}

long long int prim(int n) {
    
    long long int sum = 0;
    
    for(int i = 1;i*i<=n;i++) {
        if(n % i == 0) sum+=2;
        if(i*i == n) sum--;
    }
    return sum == 2;
}

long long int i_prim(int n) {
    
    long long int i = n;
    while(!prim(i)) i++;
    long long int p1 = i;
    
    i = n;
    while(!prim(i) && i != 0) i--;
    
    return p1 - i;
    
}

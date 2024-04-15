int sum3(int v[], int n) {
    if (n==0) return 0;
    
    if(v[n-1] % 3 == 0) return v[n-1] + sum3(v, n-1);
    
    return sum3(v, n-1);
}

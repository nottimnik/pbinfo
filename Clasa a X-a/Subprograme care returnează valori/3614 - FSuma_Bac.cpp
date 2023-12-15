int suma(int a, int b) {
    int inter = min(a, b);
    int sum = 0;
    for(int i = 1;i<=inter;i++) {
        if(a % i == 0 && b % i == 0) sum += i;
    }
    
    return sum;
}

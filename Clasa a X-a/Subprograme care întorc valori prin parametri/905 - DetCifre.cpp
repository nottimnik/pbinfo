void detcifre(int n, int& p, int& u) {
    int m = n;
    while(n) {
        p = n % 10;
        n /= 10;
    }
    if (m==0) {
        p=0;
    }
    u = m % 10;
}

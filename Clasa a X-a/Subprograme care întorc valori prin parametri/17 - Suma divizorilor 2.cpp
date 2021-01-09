void sum_div(int n, int& sum) {
    sum = 0;
    for(int d = 1;d*d<=n;++d) {
        if(n%d==0) {
            sum += d + n / d;
        }
        if(d*d==n) {
            sum-= d;
        }
    }
}

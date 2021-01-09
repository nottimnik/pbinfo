void sum_cif(int n, int& sum) {
    sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
}

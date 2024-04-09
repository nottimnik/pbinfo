int CifEgaleRec(int n, int k) {
    if(n<=9) return n == k;
    return (n % 10 == k) && CifEgaleRec(n/10, k);
}

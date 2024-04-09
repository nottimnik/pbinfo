int CifDiferiteRec(int n, int k) {
    if(n<=9) return n != k;
    return (n % 10 != k) + CifDiferiteRec(n/10, k);
}

int FCrescRec(int n) {
    if(n<=9) return true;
    
    if(n % 10 <= n / 10 % 10) {
        return FCrescRec(n/10);
    }
    return false;
}

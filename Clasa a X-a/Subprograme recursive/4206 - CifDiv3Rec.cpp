int CifDiv3Rec(long long int n) {
    if(n <= 9) {
        return (n % 3 == 0);
    }
    return ((n % 10 ) % 3 == 0 )+ CifDiv3Rec(n/10);
}

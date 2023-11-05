long long nroot(int n, long long x) {
    return round(pow(max(x, -x), 1.0/n));
}

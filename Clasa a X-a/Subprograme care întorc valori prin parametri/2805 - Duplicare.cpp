void duplicare(int& n) {
    int nr = 0;
    int p = 1;
    while(n) {
        int a = n % 10;
        if(a%2==0) {
            nr = nr + (a/2)*p;
            p *= 10;
        }
        nr = nr + a * p;
        p *= 10;
        n /= 10;
    }
    n = nr;
}

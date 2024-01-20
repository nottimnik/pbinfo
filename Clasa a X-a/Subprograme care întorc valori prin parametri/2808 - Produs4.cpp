int produs(int n, int & k) {
    int prod = 1;
    int nr = 1;
    
    while(prod * (nr + 2) <= n) {
        prod *= nr + 2;
        nr += 2;
       
    }
    k = nr;
}

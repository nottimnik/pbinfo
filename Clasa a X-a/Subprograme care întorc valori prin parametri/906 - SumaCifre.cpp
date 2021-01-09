void sumcif(int n, int& s, int&t) {
    s = 0, t = 0;
    while(n) {
        int cif = n % 10;
        if(cif % 2 == 0){
            s += cif;
        }
        else {
            t += cif;
        }
        n /= 10;
    }
}

bool Egal(int n) {
    int nr = 0;
    bool rez = true;
    while(n) {
        int cif = n % 10;
        if(cif % 2 == 1){
            if(nr==0) {
                nr = cif;
            }
            else if(cif!=nr) {
                rez = false;
            }
        }
        n /= 10;
    }
    return rez;
}

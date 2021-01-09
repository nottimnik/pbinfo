int UCP(int n) {
    if(n==0) {
        return 0;
    }
    else {
    int nr = 1;
    while(n) {
        int cif = n % 10;
        if(cif % 2 == 0 && nr == 1){
            nr = cif;
        } 
        n /= 10;
    }
    if(nr==1) {
        return -1;
    }
    else {
    return nr;
    }
    }
}

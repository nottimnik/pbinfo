void nr_cif_zero(int n, int& s) {
    if(n>=10)
        nr_cif_zero(n/10, s);
    else
        s = 0;
    if(n%10 == 0)
        s += 1;
}

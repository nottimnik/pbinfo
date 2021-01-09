int fact(int a) {
    int rez = 1;
    for(int i = 1;i<=a;++i) {
        rez *= i;
    }
    return rez;
}

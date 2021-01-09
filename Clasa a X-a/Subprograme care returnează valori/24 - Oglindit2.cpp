int oglindit(int a) {
    int rez = 0;
    while(a) {
        rez = rez * 10 + a % 10;
        a /= 10;
    }
    return rez;
}

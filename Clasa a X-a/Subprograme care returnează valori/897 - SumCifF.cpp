int sumcif(int a) {
    int rez = 0;
    while(a) {
        rez += a % 10;
        a /= 10;
    }
    return rez;
}

int concat(int a, int b) {
    int cb = b, nr = 1;
    while(b) {
        nr = nr * 10;
        b /= 10;
    } 
    b = cb;
    a = a * nr + b;
    return a;
}

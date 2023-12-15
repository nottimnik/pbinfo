int DivImpar(int a, int b) {
    while(a != b) {
        if(a > b) a = a - b;
        else b = b - a;
       
    }
    while(a % 2 == 0) a/=2;
    return a;
}

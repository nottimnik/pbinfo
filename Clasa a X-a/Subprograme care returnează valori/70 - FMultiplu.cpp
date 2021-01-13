int multipli(int a, int b, int c) {
    if(a>b) {swap(a, b);}
    int cnt = 0;
    while(a%c!=0)
        ++a;
    while(b%c!=0)
        --b;
    cnt = (b-a)/c + 1;
    return cnt;
}

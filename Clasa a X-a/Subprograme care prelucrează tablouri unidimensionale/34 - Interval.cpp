int interval(int v[101], int n) {
    int a = v[0], b = v[n-1], cnt = 0;
    if(a>b) {
        swap(a,b);
    }
    for(int i = 0;i<n;++i) {
        if(v[i]<=b && a <= v[i]) {
            ++cnt;
        }
    }
    return cnt;
}

int cmmnr(int a) {
    int numar = 0;
    int v[1001], nr = 0;
    while(a) {
        v[++nr] = a % 10;
        a /= 10;
    }
    for(int i = 1;i<=nr;++i) {
        for(int j = i + 1;j<=nr;++j) {
            if(v[i]<v[j]) {
                swap(v[i],v[j]);
            }
        }
    }
    for(int i = 1;i<=nr;++i) {
        numar = 10 * numar + v[i];  
    }
    return numar;
}

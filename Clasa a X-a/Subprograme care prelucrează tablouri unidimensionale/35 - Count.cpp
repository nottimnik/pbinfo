double suma(double v[], int n) {
    int sum = 0;
    for(int i = 0;i<n;++i) {
        sum += v[i];
    }
    return sum/n;
}

int count(double v[], int n) {
    double medie = suma(v, n);
    int cnt = 0;
    for(int i = 0;i<n;++i) {
        if(v[i]>=medie) {
            ++cnt;
        }
    }
    return cnt;
}

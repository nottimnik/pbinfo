void afisvec(int v[], int n) {
    cout << v[n-1] << ' ';
    if(n>1) afisvec(v, n-1);
}

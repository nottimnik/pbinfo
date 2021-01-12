int suma(int v[], int n, int z, int j) {
    int suma1 = 0, suma2 = 0;
    for(int i = 1;i<z;++i) {
        suma1 += v[i];
    }
    for(int i = j+1;i<=n;++i) {
        suma2 += v[i];
    }

    return suma1 + suma2;
}

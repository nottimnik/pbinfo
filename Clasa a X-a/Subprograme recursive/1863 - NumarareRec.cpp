int numarare(int v[], int n) {
    if(n<2) return 0;
    
    return (v[n-1] == v[n-2]) + numarare(v,n-1);
    
}

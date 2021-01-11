void sterge(int a[], int& n, int i, int j){
    int cnt = j - i + 1;

    for(int l = j + 1; l <= n; ++l)
        a[l - cnt] = a[l];

    n-=cnt;
}

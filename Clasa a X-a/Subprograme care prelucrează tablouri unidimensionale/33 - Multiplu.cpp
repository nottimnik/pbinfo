int multiplu(int v[], int n, int k) {
    int cnt = 0;
    for(int i = 0;i<n;++i) {
        if(v[i]%k==0 && v[i]%10==k){
            ++cnt;
        }
    }
    return cnt;
}

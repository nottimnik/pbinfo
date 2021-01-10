void nr_div_imp(int n,int& cnt) {
    cnt = 0;
    for(int d = 1;d*d<=n;++d) {
        if(d*d==n) {
            if(d%2==1) {
                ++cnt;
            }
        }
        else if(n%d==0) {
            if(d%2==1) {
                ++cnt;
            }
            if((n/d)%2==1) {
                ++cnt;
            }
        }
    }
}

bool prim(int n) {
    bool adv = false;
    int cnt = 0;
    for(int d = 1;d*d<=n;++d) {
        if(n%d==0) {
            cnt+=2;
        }
        if(d*d==n) {
            --cnt;
        }
    }
    if(cnt==2) {
        adv = true;
        return adv;
    }
    else {
        return adv;
    }
}

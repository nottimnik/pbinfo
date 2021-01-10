bool prim(int n) {
    int cnt = 1;
    bool adv = false;
    for(int d = 1;d*d<=n;++d){ 
        if(n%d==0) {
            cnt += 2;
        }
        if(d*d==n) {
            --cnt;
        }
    }
    if(cnt==2) {
        adv = true;
        return adv;
    }  
    return adv;
}


void sum_div_prim(int n, int& sum) {
    sum = 0;
    for(int d = 1;d*d<=n;++d) {
        if(d*d==n) {
            if(prim(d)==1) {
                sum += d;
            }
        } 
        else if(n%d==0) {
            if(prim(d)==1) {sum+= d;}
            if(prim(n/d)==1) {sum+= n/d;}
        } 
    }
}

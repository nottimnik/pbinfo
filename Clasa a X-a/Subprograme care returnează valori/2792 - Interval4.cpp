int prim(int n) {
    int cnt = 0;
    for(int i = 1;i*i<=n;i++) {
        if(n%i==0) cnt+=2;
        if(i*i==cnt) cnt--;
    }
    
    return cnt == 2;
}

int interval(int n) {
    
    int i = n;
    while(!prim(i))i++;
    i++;
    while(prim(i))i++;
    return i;
}

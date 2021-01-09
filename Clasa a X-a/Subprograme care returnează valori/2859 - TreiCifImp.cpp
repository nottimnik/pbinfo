bool TreiCifImp(int n) {
    bool adv = false;
    int cnt = 0;
    while(n) {
        int cif = n % 10;
        if(cif%2==1) {
            ++cnt;
        }
        else if(cif%2==0 && cnt!=0) {
            cnt = 0;
        }
        if(cnt==3) {
            adv = true;
        }
        n /= 10;
    }
    return adv;
}

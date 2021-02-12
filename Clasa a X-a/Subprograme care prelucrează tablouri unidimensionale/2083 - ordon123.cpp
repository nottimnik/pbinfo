void ordon123(int n,int v[]) {
        int cnt1, cnt2, cnt3;
        cnt1 = cnt2 = cnt3 = 0;
        for(int i = 0;i<n;++i) {

                if(v[i]==1)
                        ++cnt1;
                if(v[i]==2)
                        ++cnt2;
                if(v[i]==3)
                        ++cnt3;
        }
        for(int i = 0;i<cnt1;++i)
                v[i] = 1;

        for(int i = cnt1;i<cnt1+cnt2;++i)
                v[i] = 2;

        for(int i = cnt1+cnt2;i<cnt1+cnt2+cnt3;++i)
                v[i] = 3;
}

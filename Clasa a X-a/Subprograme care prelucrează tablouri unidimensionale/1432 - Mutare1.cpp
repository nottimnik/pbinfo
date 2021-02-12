void aranjare(int v[], int n) {
        for(int i = 0;i<n;++i)
                if(v[i]%2==0)
                        for(int j = i + 1;j<n;++j)
                                if(v[j]%2==1) {
                                        swap(v[j],v[i]);
                                        break;
                                }
}

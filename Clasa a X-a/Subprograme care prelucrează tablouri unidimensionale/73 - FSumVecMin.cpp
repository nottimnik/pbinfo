int suma(int v[], int n, int m) {
        //sortam vectorul pentru a ne fi mai usor sa gasim cele mai mici numere
        for(int i = 0;i<n;++i)
                for(int j = i+1;j<n;++j)
                        if(v[i] > v[j])
                                swap(v[i],v[j]);
        int sum = 0;
        for(int i = 0;i<m;++i)
                sum += v[i];
        return sum;
}

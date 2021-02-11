int sum3 (int v[], int n) {
     int sum = 0;
    for(int i = 0;i<n;++i)
        if(v[i]%3==0)
        	sum += v[i];
    return sum;
}

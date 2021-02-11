int cautare(int n, double x[], double v)
{
        int k = -1;
        for(int i = 0;i<n;++i) {
                if(x[i]==v) {
                        k = i;
                }
        }
        return k;
}

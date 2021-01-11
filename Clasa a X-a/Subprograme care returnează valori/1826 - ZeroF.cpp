int zerof (int n)
{
    int a = 0, b = 0;
    if (n == 0) return 0;
    else {
        for ( int i = 1; i <= n; i++)
        {
            int x=i;
            while ( x %5==0) {b++;x=x/5;}
            while (x%2==0) {a++;x=x/2;}
        }
        if (a<= b)return a;
        else return b;
    }
}

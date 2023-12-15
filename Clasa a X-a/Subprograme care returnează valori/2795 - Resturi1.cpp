int cmmdc (int a, int b)
{
    while(b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int cmmmc (int a , int b)
{
    return a * b / cmmdc(a, b);
}
int resturi(int n , int x , int y , int r)
{
    int val = cmmmc(x , y);
    n-=r;
    return n / val + 1;
}

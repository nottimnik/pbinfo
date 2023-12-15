int Fibo(int n) {
    int x, y;
    x=y=1;
    
    int i = 2;
    while(i<n) {
        
        int suma = x + y;
        x = y; y = suma;
        
        if(y % 2 == 1)
            i++;
        
    }
    return y;
}

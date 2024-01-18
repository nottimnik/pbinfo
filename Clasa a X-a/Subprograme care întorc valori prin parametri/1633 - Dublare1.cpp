void dublare1(int & n) {
    int nr = 0, cn = n;
    int p = 1;
    while(cn > 9) {
       cn /= 10; 
       p *= 10;
    }
    
    n = n + cn * p * 10;
}

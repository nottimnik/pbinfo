int FiboRec(int x, int y) {
   	if(x == 1 && y == 1) return 1;
    if(x <= 0 || y <= 0) return 0;
    
    return FiboRec(y-x,x);
    
}

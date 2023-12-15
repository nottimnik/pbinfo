int poz(int x1,int y1,int l1,int i1,int x2,int y2,int l2,int i2) {
    
    if(x2>x1 && y2 > y1 && x1+l1 > x2+l2 && y1+i1 > y2+i2) return 0;
    if(x2<x1 && y2 < y1 && x1+l1 < x2+l2 && y1+i1 < y2+i2) return 0;
    
    if(x1==x2 && y1==y2 && i1==i2 && l1==l2) return 1;
    
    if(y2+i2<y1) return 2;
        
    if(y1+i1<y2) return 2;
   
    if(x1+l1<x2)  return 2;
    if(x2+l2<x1)  return 2;
    
    return 3;
}

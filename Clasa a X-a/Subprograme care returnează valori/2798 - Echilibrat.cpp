int echilibrat(int n) {
    int pare = 0, impare = 0;
    
    int i = 0;
    while(n) {
        if(i%2==0) pare += n % 10;
        else impare += n % 10;
        
        i++;
        n/=10;
    }
    
    if(pare % 2 ==0 && impare % 2 == 1) return 1;
    else return 0;
    
}

int cnt = 0;
void cnt_cif(int n, int k, int& c){
    if(n==0 && k==0 && cnt == 0) {
    	c = 1;   
    }
    else if(n==0) {
     	c = 0;   
    }
    else {
        ++cnt;
        if(n%10 >= k) {
        	cnt_cif(n/10,k,c), c++;    
        }
        else {
            cnt_cif(n/10,k,c);
        }
        
    }
}

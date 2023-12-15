int nz(int n) {
    int temp4 = 5, temp1 = 0;
    while (temp4 < n) {
	        temp1 = temp1 + n / temp4;
	        temp4 = temp4 * 5;
	    } 
	return temp1;
}

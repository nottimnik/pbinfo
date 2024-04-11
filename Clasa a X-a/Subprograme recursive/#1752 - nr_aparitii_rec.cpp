unsigned nr_aparitii(char *sir, char *secventa) {
	if(strlen(sir)==0) return 0;
    else if(strstr(sir, secventa)==NULL) return 0;
    return 1 + nr_aparitii(strstr(sir,secventa)+strlen(secventa),secventa);
    
}

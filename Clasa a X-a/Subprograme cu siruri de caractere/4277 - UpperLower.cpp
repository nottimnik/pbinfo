void UpperLower(const char a[], char U[], char L[]) {
    int i;
    
    for(i=0;a[i];i++) {
        U[i] = toupper(a[i]);
        L[i] = tolower(a[i]);
    }
    
    U[i] = L[i] = '\0';
}

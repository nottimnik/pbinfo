int sumfactcif(int a) {
    int sum = 0;
    if(a == 0) {
        return 1;
    }
    else {
        while(a) {
            if (a % 10 == 0) {
                ++sum;
            }
            else {
                int factorial = 1;
                for(int i = 1;i<=a%10;++i) {
                    factorial *= i;
                }
                sum += factorial;
            }
            a /= 10;
        }
    }
    return sum;
}

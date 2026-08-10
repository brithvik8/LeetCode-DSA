int reverse(int a){
    long int rev = 0;
    while (a!=0){
        int dig=a%10;
        rev=rev*10+dig;
        a/=10;
        if(rev>2147483647 || rev<-2147483648){
            return 0;
        }
    }
    return rev;
}


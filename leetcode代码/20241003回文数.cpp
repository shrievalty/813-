bool isPalindrome(int x) {
    if(x<0)return false;
    if(x==0)return true;
    long long  m=x,value=0;
    while(m!=0){
        value=value*10;
        value+=(m%10);
        m/=10;
    }
    if(value==x) return true;
    else return false;
    

}

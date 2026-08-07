bool isPalindrome(int x) {
    long rev = 0,rem;
    int temp = x;
    if(x<0) return false;
    while(x  != 0){
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x/10;
    }
    if(temp == rev ) return true;
    else  return false;
    
}
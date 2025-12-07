class Solution {
public:
    bool isPalindrome(int n) {
        int temp=n;
        int rem=0;
        long rev=0;
        while(n>0){
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        if(rev==temp){
            return true;
        }
        else{
            return false;
        }
    }
};

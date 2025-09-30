class Solution {
public:
    int subtractProductAndSum(int n) {
        int multiple=1;
        int sum=0;
        while(n!=0){
            int remainder=n%10;
            multiple*=remainder;
            sum+=remainder;
            n/=10;
        }
        return multiple-sum;
        
            
        
    }
};

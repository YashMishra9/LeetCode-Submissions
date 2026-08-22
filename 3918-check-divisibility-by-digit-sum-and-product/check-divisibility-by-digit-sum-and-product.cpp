class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        vector<int>digits={};
        while(temp!=0){
            int digit=temp%10;
            digits.push_back(digit);
            temp/=10;
        }
        int sum=0;
        int product=1;
        for(int i=0;i<digits.size();i++){
            sum+=digits[i];
            product*=digits[i];
        }
        if(n%(sum+product)==0){
            return true;
        }
        return false;
    }
};
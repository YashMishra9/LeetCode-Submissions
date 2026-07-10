class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum=0,squareSum=0;
        // vector<int>arr;
        while(n!=0){
            int digit=n%10;
            // arr.push_back(digit);
            digitSum+=digit;
            squareSum+=(digit*digit);
            n/=10;
        }
        if(squareSum-digitSum>=50){
            return true;
        }
        return false;
        
        
    }
};

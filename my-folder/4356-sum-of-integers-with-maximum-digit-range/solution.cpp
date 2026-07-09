class Solution {
public:
    int Range(int n){
        vector<int>arr;
        int digit=0;
        while(n!=0){
            int digit=n%10;
            arr.push_back(digit);
            n/=10;
        }
        int maxi=*max_element(arr.begin(),arr.end());
        int mini=*min_element(arr.begin(),arr.end());
        return maxi-mini;

    }
    int maxDigitRange(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            res.push_back(Range(nums[i]));
        }
        int maxi=*max_element(res.begin(),res.end());
        int sum=0;
        for(int i=0;i<res.size();i++){
            if(res[i]==maxi){
                sum+=nums[i];
            }
            else continue;
        }
        return sum;
        
    }
};

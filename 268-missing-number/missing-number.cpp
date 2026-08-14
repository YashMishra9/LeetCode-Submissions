class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=i){
        //         return i;
        //     }
        // }
        // return nums.size();

        int totalSum=0;
        for(int i=0;i<=nums.size();i++){
            totalSum+=i;
        }
        int sum=accumulate(nums.begin(),nums.end(),0);
        return totalSum-sum;

    }
};
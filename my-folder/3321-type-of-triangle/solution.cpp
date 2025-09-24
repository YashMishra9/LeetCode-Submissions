class Solution {
public:
    string triangleType(vector<int>& nums) {
        string triangle=" ";
        int i=0;
            if(nums[i]+nums[i+1]<=nums[i+2] || nums[i+1]+nums[i+2]<=nums[i] || nums[i]+nums[i+2]<=nums[i+1]){
                triangle="none";
            }
            else if(nums[i]==nums[i+1] && nums[i+1]==nums[i+2]){
                triangle="equilateral";
            }
            else if(nums[i]==nums[i+1] || nums[i+1]==nums[i+2] || nums[i]==nums[i+2]){
                triangle="isosceles";
            }
            else if(nums[i]!=nums[i+1] && nums[i+1]!=nums[i+2] && nums[i]!=nums[i+2]){
                triangle="scalene";
            }
           
        
        return triangle;
    }
};

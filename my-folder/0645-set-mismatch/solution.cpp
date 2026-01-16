class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
            int repeat=-1;
            int missing=-1;
            sort(nums.begin(),nums.end());
            for(int i=1;i<nums.size();i++){
                if(nums[i]==nums[i-1]){
                    repeat=nums[i];
                }
                if(nums[i]>nums[i-1]+1){
                    missing=nums[i-1]+1;
                }
            }
            if (missing == -1) {
            if (nums[0] != 1) missing = 1;
            else missing = nums.size();
        }
            return {repeat,missing};
    }
};

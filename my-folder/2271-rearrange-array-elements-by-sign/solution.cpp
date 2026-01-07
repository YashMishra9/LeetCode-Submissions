class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positives={};
        vector<int>negatives={};
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                positives.push_back(nums[i]);
            }
            else{
                negatives.push_back(nums[i]);
            }
        }
        vector<int>merged={};
        for(int i=0;i<positives.size();i++){
            merged.push_back(positives[i]);
            merged.push_back(negatives[i]);
        }
        return merged;
    }
};

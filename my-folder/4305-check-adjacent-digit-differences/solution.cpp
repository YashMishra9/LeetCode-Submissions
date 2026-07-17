class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        vector<int>nums={};
        for(char &c:s){
           nums.push_back(c-'0');
        }

        for(int i=0;i<nums.size()-1;i++){
            if(abs(nums[i+1]-nums[i])>2){
                return false;
            }
        }
        return true;
    }
};

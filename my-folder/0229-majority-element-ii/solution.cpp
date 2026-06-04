class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>arr={};
        map<int,int>mpp;
        for(int x:nums){
            mpp[x]++;
        }
        for(auto it:mpp){
            if(it.second>nums.size()/3){
                arr.push_back(it.first);
            }
        }
        return arr;
    }
};

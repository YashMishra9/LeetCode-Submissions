class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mpp;
        for(int x:nums){
            mpp[x]++;
        }
        vector<int>res={};
        for(auto it:mpp){
            if(it.second==2){
                res.push_back(it.first);
            }
        }
        return res;
    }
};
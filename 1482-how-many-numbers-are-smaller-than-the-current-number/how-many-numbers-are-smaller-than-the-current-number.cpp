class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // // int cnt=0;
        // vector<int>small={};
        // for(int i=0;i<nums.size();i++){
        //     int cnt=0;
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[j]<nums[i]){
        //             cnt++;
        //         }
        //     }
        //     small.push_back(cnt);
        // }
        // return small;

        vector<int>sorted=nums;
        sort(sorted.begin(),sorted.end());
        unordered_map<int,int>mpp;
        for(int i=0;i<sorted.size();i++){
                if(mpp.find(sorted[i])==mpp.end()){
                    mpp[sorted[i]]=i;
                }
        }
        vector<int>ans;
        for(int x:nums){
            ans.push_back(mpp[x]);
        }
        return ans;
    }
};
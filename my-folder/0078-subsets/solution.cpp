class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int subsets=1<<n;
        vector<vector<int>>list={};
        for(int num=0;num<subsets;num++){
            vector<int>ans={};
            for(int j=0;j<n;j++){
                if(num&(1<<j)){
                    ans.push_back(nums[j]);
                }
            }
            list.push_back(ans);
        }
        return list;
    }
};

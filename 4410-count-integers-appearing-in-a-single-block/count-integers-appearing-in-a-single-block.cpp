class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int cnt=0;
        set<int>st;
        for(int x:nums){
            st.insert(x);
        }

        for(int x:st){
            vector<int>indices={};
            for(int i=0;i<nums.size();i++){
                if(nums[i]==x){
                    indices.push_back(i);
                }
            }
            bool ok=true;
            for(int i=0;i<indices.size()-1;i++){
                if(indices[i+1]-indices[i]!=1){
                    ok=false;
                }
            }
            if(ok) cnt++;

        }
        return cnt;

    }
};
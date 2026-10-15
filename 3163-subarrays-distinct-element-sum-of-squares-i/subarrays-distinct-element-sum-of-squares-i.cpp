class Solution {
public:
    int sum(int i,int j,vector<int>arr){
        set<int>st;
        for(int x=i;x<=j;x++){
            st.insert(arr[x]);
        }
        int res=st.size()*st.size();
        return res;
    }
    int sumCounts(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                ans+=sum(i,j,nums);
            }
        }
        return ans;
        
    }
};
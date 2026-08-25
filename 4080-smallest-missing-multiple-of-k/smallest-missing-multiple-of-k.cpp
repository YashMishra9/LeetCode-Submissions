class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>st;
        for(int x:nums){
            st.insert(x);
        }
        vector<int>temp(st.begin(),st.end());
        map<int,int>mpp;
        for(int x:temp){
            mpp[x]++;
        }
        if(temp.size()==1 && temp[0]==k){
            return k*2;
        }
        int start=1;
        for(auto it:mpp){
            if(mpp.find(k*start)==mpp.end()){
                return k*start;
            }
            else{
                start++;
            }
        }
        return k*(temp.size()+1);
        
    }
};
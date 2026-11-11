class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
            set<int>st;

            int i=0,j=0;
            while(i<nums1.size() && j<nums2.size()){
                if(nums1[i]==nums2[j]){
                    // ans.push_back(nums1[i]);
                    st.insert(nums1[i]);
                    i++;
                    j++;
                }
                else if(nums2[j]>nums1[i]){
                    i++;
                }
                else{
                    j++;
                }
            }
        
        vector<int>res={};
        for(int x:st){
            res.push_back(x);
        }
        return res;
    }
    
};
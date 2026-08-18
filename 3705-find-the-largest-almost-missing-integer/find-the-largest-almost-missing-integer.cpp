class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int first=nums[0];
        int last=nums[nums.size()-1];
        int cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==first){
                cnt1++;
            }
            if(nums[i]==last){
                cnt2++;
            }
        }
        map<int,int>mpp;
        for(int x:nums){
            mpp[x]++;
        }
        int maxi=*max_element(nums.begin(),nums.end());
        // sort(nums.begin(),nums.end());

        int end=nums.size()-1;
        if(k==1){
            int ans=-1;
            for(int x:nums){
                if(mpp[x]==1){
                    ans=max(ans,x);
                }
            }
            return ans;
        }

        else if(k==nums.size()){
            return maxi;
        }
        else if(k>1 && k<nums.size()){
            int ans=-1;
            if(cnt1==1 && cnt2!=1){
                ans=max(ans,first);
            }
            else if(cnt2==1 && cnt1!=1){
                ans=max(ans,last);
            }
            else if(cnt1==cnt2 && cnt1==1){
                ans=max(first,last);
            }
            return ans;
        }

        
        

        return 0;
    }
};
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>hcf={};
        hcf.push_back(nums[0]);
        int maxi=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=maxi){
                maxi=nums[i];
                hcf.push_back(__gcd(maxi,nums[i]));
            }
            else{
                hcf.push_back(__gcd(maxi,nums[i]));
            }
        }
        sort(hcf.begin(),hcf.end());
        int start=0;
        int end=hcf.size()-1;
        long long sum=0;
        while(start<=end && start!=end){
            sum+=__gcd(hcf[start],hcf[end]);
            start++;
            end--;
        }
        return sum;

    }
};

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long n=nums.size();
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        long long start=0;
        long long end=nums.size()-1;
        if(n%2==0){
            while(start<end){
                sum+=nums[end]*nums[end];
                sum-=nums[start]*nums[start];
                end--;
                start++;
            }
        }
        else{
            while(start<end-1){
                sum+=nums[end]*nums[end];
                sum-=nums[start]*nums[start];
                end--;
                start++;
            }
            sum+=nums[end]*nums[end];
        }
        return sum;
    }
};
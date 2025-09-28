class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sumele=0;
        for(int i=0;i<nums.size();i++){
            sumele+=nums[i];
        }
        // string s=to_string(nums);
        // int sumdigit=0;
        // for(int i=0;i<s.size();i++){
        //     sumdigit+=s[i];
        // }
        int sumdigit=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]!=0){
                int temp=nums[i]%10;
                sumdigit+=temp;
                nums[i]=nums[i]/10;
            }
        }
        int diff=abs(sumele-sumdigit);
        return diff;
    }
};

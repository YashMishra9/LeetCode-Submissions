class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int SingleSum=0;
        int DoubleSum=0;
      

        for(int i=0;i<nums.size();i++){
            if(nums[i]<=9){
                SingleSum+=nums[i];
            }
            else{
                DoubleSum+=nums[i];
            }
        }
        if(SingleSum==DoubleSum){
            return false;
        }
        else{
            return true;
        }
    }
};

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>temp=nums;
        int j=1;
        for(int i=n;i<2*n;i++){
                nums[j]=nums[i];
                j+=2;
        }
        int k=2;
        for(int i=1;i<n;i++){
            nums[k]=temp[i];
            k+=2;
        }

        return nums;


    }
};

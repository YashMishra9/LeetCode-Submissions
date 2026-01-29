class Solution {
public:
    bool ispresent(vector<int>&arr,int n){
        for(int i=0;i<arr.size();i++){
            if(arr[i]==n){
                return true;
            }
        }
        return false;
    }
    int findKthPositive(vector<int>& arr, int k) {
            vector<int>missings;
            int num=1;
            while(missings.size()<k){
                bool ok=ispresent(arr,num);
                if(!ok){
                    missings.push_back(num);
                }
                num++;
                
            }
            return missings[k-1];
    }
};

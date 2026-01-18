class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
            vector<int>ans;
            for(int i=0;i<arr.size();i++){
                int idx=abs(arr[i])-1;
                if(arr[idx]>0){
                    arr[idx]=-arr[idx];
                }
            }
            for(int i=0;i<arr.size();i++){
                if(arr[i]>0){
                    ans.push_back(i+1);
                }
            }
            return ans;
    }   
};

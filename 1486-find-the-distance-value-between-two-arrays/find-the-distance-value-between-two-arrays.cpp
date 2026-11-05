class Solution {
public:
    bool check(vector<int>&a,vector<int>&b,int start,int d){
        
        for(int j=0;j<b.size();j++){
            if(abs(a[start]-b[j])<=d){
                return false;
            }
        }
        return true;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int distance=0;
        for(int i=0;i<arr1.size();i++){
            if(check(arr1,arr2,i,d)){
                distance++;
            }
        }
        return distance;
    }
};
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        map<int,int>mpp;
        int rank=1;
        for(int x:temp){
            if(mpp.find(x)==mpp.end()){
                mpp[x]=rank++;
            }
        }
        
        for(int &x:arr){
            x=mpp[x];
        }
        return arr;
    }
};

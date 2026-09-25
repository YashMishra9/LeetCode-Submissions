class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int maxi=INT_MIN;
        for(auto &row:mat){
            maxi=max(maxi,*max_element(row.begin(),row.end()));
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==maxi){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};
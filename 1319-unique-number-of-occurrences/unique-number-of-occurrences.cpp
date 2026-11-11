class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr){
        map<int,int>mpp;
        for(int x:arr){
            mpp[x]++;
        }
        set<int>st;
        vector<int>occ={};
        for(auto it:mpp){
            st.insert(it.second);
            occ.push_back(it.second);
        }

        return occ.size()==st.size();

    }
};
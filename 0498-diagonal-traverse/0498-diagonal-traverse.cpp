class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int> result;
        map<int,vector<int>> mpt;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mpt[i+j].push_back(mat[i][j]);
            }
        }
        for(auto &it : mpt)
        {
            if(it.first % 2 == 0)
            {
                reverse(it.second.begin(),it.second.end());
            }
        }
        for(auto it : mpt)
        {
            for(int &num : it.second)
            {
                result.push_back(num);
            }
        }
        return result;
    }
};
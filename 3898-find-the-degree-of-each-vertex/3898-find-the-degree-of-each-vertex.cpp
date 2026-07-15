class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int> degree(n,0);
        for(int i=0; i<n; i++)
        {
            int node=0;
            for(auto it : matrix[i])
            {
                if(it==1) node++;
            }
            degree[i]=node;
        }
        return degree;
    }
};
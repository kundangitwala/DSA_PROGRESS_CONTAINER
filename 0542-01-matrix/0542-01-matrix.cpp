class Solution {
public:
    vector<pair<int,int>> vt{{-1,0},{1,0},{0,-1},{0,1}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
       int row=mat.size();
       int col=mat[0].size();
       queue<pair<int,int>> qt;
       vector<vector<int>> result(row,vector<int>(col,-1));
       for(int i=0;i<row; i++)
       {
         for(int j=0;j<col; j++)
         {
            if(mat[i][j]==0)
            {
                result[i][j]=0;
                qt.push({i,j});
            }
         }
       } 
       while(!qt.empty())
       {
        auto it = qt.front();
        qt.pop();
        int x=it.first;
        int y=it.second;
        for(auto it : vt)
        {
            int new_i=x+it.first;
            int new_j=y+it.second;
            if(new_i>=0 && new_i<row && new_j>=0 && new_j<col && result[new_i][new_j] == -1)
            {
                result[new_i][new_j]=result[x][y] +1;
                qt.push({new_i,new_j});
            }
        }

       }
       return result;
    }
};
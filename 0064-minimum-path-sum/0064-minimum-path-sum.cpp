class Solution {
public:
    int m,n;
    int t[201][201];
    int solve(int i,int j,vector<vector<int>>& grid,int m,int n)
    {
        if(i==n-1 && j==m-1)
        {
            return grid[i][j];
        }
        // sirf down ja sakta h
        if(t[i][j] != -1)
        {
            return t[i][j];
        }
        if(j==m-1)
        {
            return t[i][j] = grid[i][j]+solve(i+1,j,grid,m,n);
        }

        // sirf right ja sakta h
        else if(i==n-1)
        {
            return t[i][j] = grid[i][j]+solve(i,j+1,grid,m,n);
        }
        else{
            return t[i][j]= grid[i][j]+min(solve(i,j+1,grid,m,n),solve(i+1,j,grid,m,n));
        }
    }
    int minPathSum(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        memset(t,-1,sizeof(t));
        return solve(0,0,grid,m,n);

    }
};
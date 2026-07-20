class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<int>> result(row,vector<int> (col,0));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                int newindex=((i*col+j)+k) % (row*col);
                int newx=newindex/col;
                int newy=newindex%col;
                result[newx][newy]=grid[i][j];
            }
        }
        return result;
    }
};
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        queue<pair<int, int>> qt;
        int freshoranges = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1)
                    freshoranges++;
                else if (grid[i][j] == 2)
                    qt.push({i, j});
            }
        }
        if (freshoranges == 0)
            return 0;
        int minute = 0;
        while (!qt.empty()) {
            int N = qt.size();
            while (N--) {
                auto it = qt.front();
                int x = it.first;
                int y = it.second;
                qt.pop();

                // up direction
                int new_x = x - 1;
                int new_y = y;
                if (new_x >= 0 && new_x < row && new_y >= 0 && new_y < col &&
                    grid[new_x][new_y] == 1) {
                    grid[new_x][new_y] = 2;
                    freshoranges--;
                    qt.push({new_x, new_y});
                }
                // down direction
                new_x = x + 1;
                new_y = y;
                if (new_x >= 0 && new_x < row && new_y >= 0 && new_y < col &&
                    grid[new_x][new_y] == 1) {
                    grid[new_x][new_y] = 2;
                    freshoranges--;
                    qt.push({new_x, new_y});
                }

                // left direction
                new_x = x;
                new_y = y - 1;
                if (new_x >= 0 && new_x < row && new_y >= 0 && new_y < col &&
                    grid[new_x][new_y] == 1) {
                    grid[new_x][new_y] = 2;
                    freshoranges--;
                    qt.push({new_x, new_y});
                }

                // right direction
                new_x = x;
                new_y = y + 1;
                if (new_x >= 0 && new_x < row && new_y >= 0 && new_y < col &&
                    grid[new_x][new_y] == 1) {
                    grid[new_x][new_y] = 2;
                    freshoranges--;
                    qt.push({new_x, new_y});
                }
            }
            minute++;
        }

        if (freshoranges == 0)
            return minute - 1;
        else {
            return -1;
        }
    }
};
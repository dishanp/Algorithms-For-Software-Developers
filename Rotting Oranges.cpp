class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        int fresh = 0, time = -1;
        
        vector<pair<int, int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        queue<pair<int, int>> q;
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) fresh++;
                else if(grid[i][j] == 2) q.push({i, j});
            }
        }
        
        while(!q.empty()) {
            int sz = q.size();
            for(int i = 0; i < sz; i++) {
                auto cur = q.front();
                q.pop();
                for(auto dir: dirs) {
                    int x = cur.first + dir.first;
                    int y = cur.second + dir.second;
                    if(x >= 0 and x < m and y >= 0 and y < n and grid[x][y] == 1) {
                        grid[x][y] = 2;
                        q.push({x, y});
                        fresh--;
                    }
                }
            }
            time++;
        }
        
        return (fresh > 0) ? -1 : ((time == -1) ? 0 : time);
    }
};

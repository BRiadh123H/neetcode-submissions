class Solution {
public:
    int m, n;
    int directions[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m = heights.size();
        n = heights[0].size();
        vector<vector<bool>> pacific(m, vector<bool>(n, false));
        vector<vector<bool>> atlantic(m, vector<bool>(n, false));

        for (int c = 0; c < n; c++) dfs(heights, 0, c, pacific);
        for (int r = 0; r < m; r++) dfs(heights, r, 0, pacific);

        for (int c = 0; c < n; c++) dfs(heights, m - 1, c, atlantic);
        for (int r = 0; r < m; r++) dfs(heights, r, n - 1, atlantic);

        vector<vector<int>> result;
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (pacific[r][c] && atlantic[r][c]) {
                    result.push_back({r, c});
                }
            }
        }
        return result;
    }

    void dfs(vector<vector<int>>& heights, int r, int c, vector<vector<bool>>& reachable) {
        reachable[r][c] = true;
        for (auto& dir : directions) {
            int nr = r + dir[0], nc = c + dir[1];

            if (nr >= 0 && nr < m && nc >= 0 && nc < n
                    && !reachable[nr][nc] && heights[nr][nc] >= heights[r][c]) {
                dfs(heights, nr, nc, reachable);
            }
        }
    }
};
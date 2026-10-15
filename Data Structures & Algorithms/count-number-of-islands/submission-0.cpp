class Solution {
public:
    void dfs(vector<vector<char>>& grid,int x,int y,vector<vector<bool>>& vis)
    {
        if ((x<0)|| (x>=grid.size()) || (y<0) || (y>=grid[0].size()))
            return;
        if (grid[x][y] == '0' || vis[x][y])
            return;
        
        vis[x][y]= true;
        dfs(grid,x+1,y,vis);
        dfs(grid,x-1,y,vis);
        dfs(grid,x,y+1,vis);
        dfs(grid,x,y-1,vis);

    }
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty()) return 0;
        int count=0;
        vector<vector<bool>> vis(grid.size(), vector<bool>(grid[0].size(), false));

        for (int i=0;i<grid.size();i++)
        {
            for (int j=0;j<grid[0].size();j++)
            {
                if (grid[i][j] == '1' && !vis[i][j]){
                    dfs(grid,i,j,vis);
                    count++;
                }
            }
        }
        return count;
    }
};

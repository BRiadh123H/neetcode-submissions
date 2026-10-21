class Solution {
public:
    
    int uniquePaths(int m, int n) {
        int dp[101][101]={0},a,b;
        dp[0][0]=1;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if (i==0){
                    dp[i][j]=1;
                    continue;
                }
                if (j==0){
                    dp[i][j]=1;
                    continue;
                }    
                dp[i][j]=dp[i][j-1]+dp[i-1][j];
            }
        }
        return dp[m-1][n-1];
    }
};

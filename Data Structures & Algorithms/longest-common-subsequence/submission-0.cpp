class Solution {
public:
    int dp[1001][1001]={0};
    int go (string& t1, string& t2,int x,int y)
    {
        if (x==0 || y==0){
            return 0;
        }
        else if (dp[x][y]!=-1)
            return dp[x][y];
        else
        {
            if (t1[x-1]==t2[y-1])
            {
                dp[x][y]=1+go(t1,t2,x-1,y-1);
            }
            else
            {
                dp[x][y]=max(go(t1,t2,x-1,y),go(t1,t2,x,y-1));
            }
            
        }
        return dp[x][y];
    }

    int longestCommonSubsequence(string text1, string text2) {
        std::fill(&dp[0][0], &dp[0][0] + sizeof(dp) / sizeof(int), -1);
        return go(text1,text2,text1.length(),text2.length());
    }
};



class Solution {
public:
    int countSubstrings(string s) {

        int n=s.length();
        int dp[1000][1000]={0};
        int a=0;
        for (int i=n-1;i>=0;i--)
        {
            for (int j =i;j<n;j++)
            {
                if (s[i]==s[j])
                {
                    if ((j-i<3)|| dp[i+1][j-1])
                    {
                        dp[i][j]=1;
                        a=a+1;
                    }
                }

            }
        }
        return a;
        
    }
};



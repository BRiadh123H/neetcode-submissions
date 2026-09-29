class Solution {
public:
    
    string longestPalindrome(string s) {
        int n=s.length();
        int dp[1000][1000]={0};
        string k="";
        for (int i=n-1;i>=0;i--)
        {
            for (int j =i;j<n;j++)
            {
                if (s[i]==s[j])
                {
                    if ((j-i<3)|| dp[i+1][j-1])
                    {
                        dp[i][j]=1;
                        if ((j-i+1)>k.length())
                            k=s.substr(i,j+1-i);
                    }
                }

            }
        }
        return k;
        
    }
};

class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        bool dp[100001]={false};int a;bool canvisit[100001]={false};
        canvisit[0]=true;
        for (int i=0;i<s.size()-1;i++)
        {
            if (!canvisit[i])
                continue;
            if (dp[s.length()-1])
                return true;
            if (s[i]=='0')
            {
                a=i+maxJump;
                if (i+maxJump>=s.length()-1)
                    a=s.length()-1;
                for (int j=i+minJump;j<=a;j++)
                {
                    canvisit[j]=true;
                    if (s[j]=='0')
                        dp[j]=true;
                }
            }
            
        }
        return dp[s.length()-1];
    }
};
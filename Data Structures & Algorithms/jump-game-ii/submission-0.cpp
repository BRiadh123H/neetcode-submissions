class Solution {
public:
    int jump(vector<int>& nums) {
        vector <int> dp(1001,INT_MAX);
        dp[0]=0;
        for (int i=0;i<nums.size();i++)
        {
            for (int j=1;j<=nums[i];j++)
            {
                if (j+i<nums.size())
                {
                    dp[i+j]=min (dp[i]+1,dp[i+j]);
                }
                
            }
        }
        return dp[nums.size()-1];
    }
};

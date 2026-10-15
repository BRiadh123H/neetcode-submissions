class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for (auto i: nums)
        {
            sum+=i;
        }
        if (sum%2==1)
            return false;
        int target =sum/2;
        vector<bool> dp(target+2,false);
        dp[0]=true;
        for (auto d:nums)
        {
            if (d>target) return false;
            
            for (int i=target;i>=d;i--)
            {
                if (dp[i-d])
                    dp[i]=true;
            }
        }
        return dp[target];
    }
};

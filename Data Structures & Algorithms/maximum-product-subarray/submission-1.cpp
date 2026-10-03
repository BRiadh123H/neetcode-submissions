class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.size()==0)
            return 0;
        else if (nums.size()==1)
            return nums[0];
        else
        {
            int maxi=0;
            int mini=0,index=0;
            int dp[20001];
            int dp1[20001];
            dp[0]=nums[0];
            dp1[0]=nums[0];
            for (int i=1;i<nums.size();i++)
            {
                dp[i]=max( nums[i], max(nums[i]*dp[i-1],nums[i]*dp1[i-1]));
                dp1[i]=min( nums[i],min(nums[i]*dp[i-1],nums[i]*dp1[i-1]) );
                maxi=max (dp[i],maxi);
            }
            return maxi;
        }
        

    }
};

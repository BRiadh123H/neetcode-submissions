class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=nums[0],curr=0,mini=0;
        for (auto i:nums)
        {
            curr+=i;
            max_sum= max (max_sum,curr-mini);
            mini=min (curr,mini);
        }
        return max_sum;
    }
};

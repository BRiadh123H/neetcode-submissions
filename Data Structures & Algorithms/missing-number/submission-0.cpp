class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=nums.size(),sum=0;
        a=a*(a+1)/2;
        for (auto i:nums)
        {
            sum+=i;
        }
        return a-sum ;
    }
};

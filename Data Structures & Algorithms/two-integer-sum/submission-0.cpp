class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int d;
        for (int i=0;i<nums.size();i++)
        {
            d= target-nums[i];
            if (m[d]!=0)
                return {m[d]-1,i};
            m[nums[i]]=i+1;
        }
        return {};
    }
};

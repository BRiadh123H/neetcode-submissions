class Solution {
public:
    void backtrack(int sum,int index,vector<int>& nums,vector <int>& current,vector<vector <int>>& sol)
    {
        if (index==nums.size())
        {
            return;
        }
        if (sum<=0)
        {
            if (sum==0)
            {
                sol.push_back(current);
                return;
            }
            return ;
        }
        current.push_back(nums[index]);
        backtrack(sum-nums[index],index,nums,current,sol);
        

        current.pop_back();
        backtrack(sum,index+1,nums,current,sol);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector <int> current;
        vector<vector<int>>sol;
        backtrack(target,0,nums,current,sol);
        return sol;
    }
};

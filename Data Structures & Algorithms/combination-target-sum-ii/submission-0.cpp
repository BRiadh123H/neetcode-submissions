class Solution {
public:
    void backtrack(int sum,int index,vector<int>& nums,vector <int>& current,vector<vector <int>>& sol)
    {
        if (sum==0)
            {
                sol.push_back(current);
                return;
            }
        if ((index==nums.size()) || (sum<0))
        {
            return;
        }
            
        current.push_back(nums[index]);
        backtrack(sum-nums[index],index+1,nums,current,sol);
        current.pop_back();
        while (index + 1 < nums.size() && nums[index] == nums[index + 1]) {
            index++; 
        }
        
        backtrack(sum,index+1,nums,current,sol);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector <int> current;
        vector<vector<int>>sol;
        sort(candidates.begin(), candidates.end());
        backtrack(target,0,candidates,current,sol);
        return sol;
    }
};

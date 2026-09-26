class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> current;
        vector<vector<int>>sol;
        backtrack(0,nums,current,sol);
        return sol;
    }
    void backtrack(int index,vector<int>& nums,vector <int>& current,vector<vector <int>>& sol)
    {
        if (index==nums.size())
        {
            sol.push_back(current);
            return;
        }
        current.push_back(nums[index]);
        backtrack(index+1,nums,current,sol);

        current.pop_back();
        backtrack(index+1,nums,current,sol);
    }
};

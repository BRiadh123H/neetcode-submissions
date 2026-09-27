class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> index(nums.size(), 0); 
        vector <int> current;
        vector<vector<int>>sol;
        backtrack(index,nums,current,sol);
        return sol;
    }
    void backtrack(vector <int>& index,vector<int>& nums,vector <int>& current,vector<vector <int>>& sol)
    {
        if (current.size()==nums.size())
        {
            sol.push_back(current);
            return;
        }
        for(int i =0;i<nums.size();i++)
        {
            if (index[i])
                continue;
            else
            {
                current.push_back(nums[i]);
                index[i]=1;
                backtrack(index,nums,current,sol);
                current.pop_back();
                index[i]=0;
            }
        }

        
    }
    
};

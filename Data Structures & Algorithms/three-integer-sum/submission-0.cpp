class Solution {
public:
    vector<vector<int>> twoSum(vector<int>& numbers, int target, int start) {
        
        int left=start,right=numbers.size()-1,sum=0;
        vector<vector<int>> k;
        while (right>left)
        {
            sum=numbers[right]+numbers[left];
            if (sum==target)
            {
                k.push_back({numbers[left],numbers[right]});
                while (left < right && numbers[left] == numbers[left + 1])
                     left++;

                while (left < right && numbers[right] == numbers[right - 1])
                     right--;
                
                left++;
                right--;

            }
            else if (sum<target)
                {left++;}    
            else
                {right--;}
        }
        
        return k;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sol;
        sort (nums.begin(),nums.end());
        for (int i=0;i<nums.size();i++)
        {
            
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int d=nums[i]*-1;
            vector<vector<int>> v =twoSum(nums,d,i+1);
            if(!v.empty())
            {   
                for (auto pairs : v)
                {   pairs.push_back(nums[i]);
                    sol.push_back(pairs);}
            }
        }
        return sol;
    }
};

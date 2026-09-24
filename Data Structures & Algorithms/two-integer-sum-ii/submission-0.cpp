class Solution 
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int left=0,right=numbers.size()-1,sum=0;
        vector<int> k;
        while (right>left)
        {
            sum=numbers[right]+numbers[left];
            if (sum==target)
            {
                k.push_back(left+1);
                k.push_back(right+1);
                return k;
            }
            else if (sum<target)
                {left++;}    
            else
                {right--;}
        }
        
        return {};
    }
};


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int a=1;
        int zero=0;
        int index=0;
        if (nums.size()==0)
            return nums;
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]==0)
            {
                zero++;
                index=i;
            }
            else
                a*=nums[i];
        }
        if (zero==1)
        {
            for (int i=0;i<nums.size();i++)
            {
                nums[i]=0;
            }
            nums[index]=a;
            return nums;
        }
        else if (zero>1)
        {
            for (int i=0;i<nums.size();i++)
            {
                nums[i]=0;
            }
            return nums;
        }
        else
        {
            for (int i=0;i<nums.size();i++)
            {
                nums[i]=a/nums[i];
            }
            return nums;
        }
    }
};

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size()==0)
        {
            return 0;
        }
        int maxrob[105],maxi=0,a=0;
        for (int i =0;i<nums.size();i++)
        {
            if ((i==0)||(i==1))
            {
                maxrob[i]=nums[i];
                maxi= max(maxrob[i],maxi);
            }
            else
            {
                
                for (int j=0;j<i-1;j++)
                {
                    a=max(a, nums[i]+maxrob[j] );
                }
              maxrob[i]=a;
              maxi= max(maxrob[i],maxi);  
            }
        }
        return maxi;

    }
};

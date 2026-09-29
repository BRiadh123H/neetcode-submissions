class Solution {
public:
    int rob1(vector<int>& nums,int start,int end) {
        int maxrob[105],maxi=0,a=0;
        for (int i =start;i<=end;i++)
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
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        return max(rob1(nums,0,n-2),rob1(nums,1,n-1));
    }
};


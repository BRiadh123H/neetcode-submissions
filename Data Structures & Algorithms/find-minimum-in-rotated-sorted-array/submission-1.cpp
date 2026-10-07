class Solution {
public:
    int findMin(vector<int> &nums) {
        int left=0, right=nums.size()-1,mid=0,mini=INT_MAX;
        while (left<=right)
        {
            mid=(right-left)/2+left;
            if (nums[left]>=nums[right]&& nums[mid]<=nums[right])
                mini=min(mini,nums[mid]);
            if (nums[left]>=nums[right]&& nums[mid]>nums[right])
            {
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return min (mini,nums[mid]);
    }
};

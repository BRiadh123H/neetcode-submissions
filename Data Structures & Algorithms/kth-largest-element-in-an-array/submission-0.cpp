class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int, std::greater<int>> ms(nums.begin(), nums.end());
        for (auto i : ms)
        {
            k--;
            if (k==0)
                return i;
            
        }
        return 0;
    }
};

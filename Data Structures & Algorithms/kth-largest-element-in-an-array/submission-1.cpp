class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int, std::greater<int>> ms(nums.begin(), nums.end());
        return *std::next(ms.begin(), k - 1);
    }
};

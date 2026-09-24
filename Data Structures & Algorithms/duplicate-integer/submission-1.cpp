class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> m;
        for (int num :nums)
        {
            if (m.count(num))
                return true;
            m.insert(num);
        }
        return false;
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
        {
            return 0;
        }
        int maxi=1;
        std::set<int> mySet;
        for (auto i : nums)
        {
            mySet.insert(i);
        }
        set<int>::iterator previous = mySet.begin();
        set<int>::iterator debut = mySet.begin();
        debut++;
        int current_streak=1;
        for (set<int>::iterator it = debut; it != mySet.end(); ++it) {
            if (*it == (*previous) + 1) {
                current_streak++; // Increment streak if consecutive
            } else {
                current_streak = 1; // Reset streak if sequence breaks
            }
            maxi= max (maxi,current_streak);
            previous++;
        }
        return maxi;
    }
};


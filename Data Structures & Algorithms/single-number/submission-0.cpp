class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        int a=0;
        for (auto i: nums)
        {
            m[i]++;
        }
        for (const auto& [item, count] : m) { 
            if (count==1)
                a=item;
        }
        return a;
    }
};

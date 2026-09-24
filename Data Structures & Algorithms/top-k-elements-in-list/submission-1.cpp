class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    
    std::map<int, int>  m;
    std::vector<int> vec ;
    for ( auto x :nums) m[x]++;
    int n = nums.size();
    std::vector<vector<int>> bucket (n+1) ;
    for ( auto i : m)
    {
        bucket[i.second].push_back(i.first);
    }

    for (auto i=n;i>=0 &&vec.size()<k;i--)
    {
        for (auto d: bucket [i])
        {
            vec.push_back(d);
            if (vec.size()==k)
                break;
        }
    }
    return vec;

    }
};

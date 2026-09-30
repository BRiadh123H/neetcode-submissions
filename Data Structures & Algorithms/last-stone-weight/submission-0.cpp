class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        multiset<int> ms(stones.begin(), stones.end());
        while (ms.size()>=2) {
        
        auto it1 = prev(ms.end());
        auto it2 = prev(it1);
        if (*it1==*it2)
            {
                ms.erase(it1);
                ms.erase(it2);
            }
        else
        {
            int a=*it1-*it2;
            ms.insert(a);
            ms.erase(it1);
            ms.erase(it2);
        }

        
    }
     return ms.empty() ? 0 : *ms.begin();
    }
};

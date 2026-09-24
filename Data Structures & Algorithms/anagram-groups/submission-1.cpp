class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sol;
        unordered_map<string,vector<string>>inter;
        for (auto i : strs)
        {
            string m=i;
            sort(m.begin(), m.end());
            inter[m].push_back(i);
        }
        for (auto pair : inter)
        {
            sol.push_back(pair.second);
        }
        return sol;
        


    }
};

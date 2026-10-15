class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
          if (intervals.empty()) return {};
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });        
    vector<vector<int>> result;
    result.push_back(intervals[0]);
    for (size_t i = 1; i < intervals.size(); i++) {
        vector<int>& current = result.back();
        const vector<int>& next = intervals[i];
        if (next[0] <= current[1]) {
            current[1] = max(current[1], next[1]);
        } else {
            result.push_back(next);
        }
    }
    return result;

  
    }
};

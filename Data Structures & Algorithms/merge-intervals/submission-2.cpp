class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int>& a,const vector<int>& b)
        {return a[0]<b[0];
        });
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for (int i=1;i<intervals.size();i++)
        {
            vector<int>& current =res.back();
             vector<int>& next=intervals[i];
            if (current[1]>=next[0])
            {
                current[1]=max(current[1],next[1]);
            }
            else
            {
                res.push_back(next);
            }
            
        }
        return res;
    }
};

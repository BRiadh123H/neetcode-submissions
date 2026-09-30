class Solution {
public:
    long long distance (int x1 ,int y1)
    {
        return (x1)*x1 + (y1 )*y1;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        map<double,vector<vector<int>>> m;
        for (auto i:points)
        {
            m[distance(i[0],i[1])].push_back(i);
        }
        vector<vector<int>> sorted;
        
        for (auto i: m)
        {
            for (auto j : i.second)
            {    sorted.push_back(j);
                    --k;
                if (k==0)
                {    break;}
            }
            if (k==0)
                {    break;}
        }
        return sorted;


    }
};

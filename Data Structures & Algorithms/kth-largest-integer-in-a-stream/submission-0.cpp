class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> m  ;
    int d=0;
    KthLargest(int k, vector<int>& nums) {
        d=k;
        for (auto i:nums)
        {
            m.push(i);
        }
        while (m.size()>k)
        {
            m.pop();
        }
    }
    
    int add(int val) {
        m.push(val);
        while (m.size()>d)
        {
            m.pop();
        }
        return m.top();
    }
};

class Solution {
public:
    int hammingWeight(int n) {
        int count =0;
        while (n>0)
        {
            count+= n&1;
            n>>=1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> sol;
        for (int i=0;i<=n;i++)
        {
            sol.push_back(hammingWeight(i));
        }
        return sol;
    }
};

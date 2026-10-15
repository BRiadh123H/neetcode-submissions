class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
    unordered_set<string> sett (wordDict.begin(),wordDict.end());
    bool dp[201]={false};
    dp[0]=true;
    for (int i=1;i<=s.size();i++){
        for (int j=0;j<=i;j++){
            if (dp[j] && sett.count(s.substr(j,i-j))){
                dp[i]=true;
                break;
            }
        }
    }
    for (auto x :dp)
    {
        cout << x<<" ";
    }
    return dp[s.size()];
    }
};

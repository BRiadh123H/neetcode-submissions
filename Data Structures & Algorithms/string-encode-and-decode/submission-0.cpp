class Solution {
public:
    string encode(vector<string>& strs) {
        string k = "";
        for (const string& i : strs) {
            k += i + "**riad**";
        }
        return k;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string delimiter = "**riad**";
        size_t start = 0;
        size_t end = s.find(delimiter);

        while (end != string::npos) {
            res.push_back(s.substr(start, end - start));
            start = end + delimiter.length();
            end = s.find(delimiter, start);
        }

        return res;
    }
};

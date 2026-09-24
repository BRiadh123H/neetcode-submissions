class Solution {
public:
    bool isPalindrome(string s) {
        string l="";
        string k="";

        for (auto j : s)
        {
            j=tolower(j);
            if ((('a'<=j)&& ('z'>=j)) || (('0'<=j)&& ('9'>=j)))
                {l=l+j;
                k=j+k;}
        }
        return k==l;
    }
};

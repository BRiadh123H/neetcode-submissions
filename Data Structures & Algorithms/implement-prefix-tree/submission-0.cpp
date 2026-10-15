class TrieNode{
public:
   TrieNode* children[26];
   bool isword;
   TrieNode(){
    for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
     isword=false;
   }

};
class PrefixTree {
public:
    TrieNode* root;
    PrefixTree() {
        root= new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr=root;
        for (auto c: word)
        {
            int i =c-'a';
            if (curr->children[i]==nullptr)
            {
                curr->children[i]= new TrieNode();
            }
            curr =curr->children[i];
        }
        curr->isword = true;
    }
    
    bool search(string word) {
        TrieNode* curr=root;
        for (auto c: word)
        {
            int i =c-'a';
            if (curr->children[i]==nullptr)
            {
                return false;
            }
            curr =curr->children[i];
        }
        return curr->isword ;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr=root;
        for (auto c: prefix)
        {
            int i =c-'a';
            if (curr->children[i]==nullptr)
            {
                return false;
            }
            curr =curr->children[i];
        }
        return true;
    }
};

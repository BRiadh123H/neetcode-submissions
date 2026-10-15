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

class WordDictionary {
public:
    TrieNode* root;
    WordDictionary() {
        root= new TrieNode();
    }
    
    void addWord(string word) {
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
        return dfs(word, 0, root);
    }

    bool dfs(string word,int j,TrieNode* root) {
        TrieNode* curr=root;
        if (j == (int)word.size()) {
            return root->isword;
        }
        char c = word[j];
        if (c == '.') {
            // Wildcard: try every existing child
            for (int i = 0; i < 26; i++) {
                if (root->children[i] && dfs( word,j+1,root->children[i])) {
                    return true;
                }
            }
            return false;
        }
       else {
        int index = c - 'a';
        if (root->children[index] == nullptr) {
            return false;
        }
        // FIX: Recursively continue the search for the next characters
        return dfs(word, j + 1, root->children[index]);
    }
    }
    
};

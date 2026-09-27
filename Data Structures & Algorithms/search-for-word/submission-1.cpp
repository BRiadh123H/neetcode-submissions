class Solution {
public:

    bool check (vector<vector<char>>& board ,string word, int index ,int i, int j)
    {
        if (index==word.size())
        {
            return true;
        }
        if ((i<0) || (j<0) || (i>=board.size()) ||(j>=board[i].size()))
            return false;
        if (board[i][j] != word[index])
            return false;
        char temp = board[i][j];
        board[i][j] = '#';
        bool hi = 
                 check (board,word,index+1,i-1,j)|| 
                 check (board,word,index+1,i,j-1) ||
                 check (board,word,index+1,i+1,j)||
                 check (board,word,index+1,i,j+1);
        board[i][j] = temp;
        
        return hi;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        for (int i =0;i<board.size();i++)
        {
            for (int j =0;j<board[i].size();j++)
            {
                if (board[i][j]==word[0])
                    if ( check (board,word,0,i,j))
                        return true;
            }
        }
    return false;
    }
};

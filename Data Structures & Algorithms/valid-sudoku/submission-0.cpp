class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       bitset<9> row[9], col[9], block[9];
       for(int r=0;r<9;r++){
        for(int c=0;c<9;c++){
            char n=board[r][c];
            if(n=='.'){
                continue;
            }
            int num=n-'0';
            int box=((r/3)*3)+(c/3);
            if(row[r][num]||col[c][num]||block[box][num]){
                return false;
            }
            row[r][num]=col[c][num]=block[box][num]=1;
        }
       } 
       return true;
    }
};
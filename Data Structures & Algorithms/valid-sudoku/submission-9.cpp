class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> was(10, 0);
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] == '.') continue;
                if(board[i][j] >= '0' && board[i][j] <= '9') was[board[i][j] - '0']++;
                else return false;
            }
            for(int j = 0; j < 10; j++){
                if(was[j] > 1) return false;
                was[j] = 0;
            }
        }
        cout << "1" << endl;
        for(int j = 0; j < board[0].size(); j++){
             for(int i = 0; i < board[j].size(); i++){
                if(board[i][j] == '.') continue;
                if(board[i][j] >= '0' && board[i][j] <= '9') was[board[i][j] - '0']++;
                else return false;
            }
            for(int i = 0; i < 10; i++){
                if(was[i] > 1) return false;
                was[i] = 0;
            }
        }
        cout << "2" << endl;
        int moveI = -3, moveJ = 0;
        for(int sqNumb = 0; sqNumb < 9; sqNumb++){
            if(sqNumb%3 == 0){
                moveI+=3;
                moveJ = 0;
            }
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(board[i + moveI][j + moveJ] == '.') continue;
                    if(board[i + moveI][j + moveJ] >= '0' && board[i + moveI][j + moveJ] <= '9') was[board[i + moveI][j + moveJ] - '0']++;
                    else return false;
                }
            }
            for(int i = 0; i < 10; i++){
                if(was[i] > 1) return false;
                was[i] = 0;
            }
            cout << sqNumb << " " << moveI << " " << moveJ << endl;
            moveJ+=3;
        }
        return true;
    }
};

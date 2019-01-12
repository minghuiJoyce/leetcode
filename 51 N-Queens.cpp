class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        std::vector<std::vector<std::string> > result;
        std::vector<std::string> board = vector<string>(n,string(n,'.'));
        vector<bool> colomn(n,false);
        vector<bool> diagnal_1(2*n-1,false);
        vector<bool> diagnal_2(2*n-1,false);
        NqHelper(0,0,result,n,board,colomn,diagnal_1,diagnal_2);
        return result;
    }
    
private:
    void placeQ(int x, int y, std::vector<std::string>& board, int n, vector<bool>& colomn, vector<bool>& diagnal_1, vector<bool>& diagnal_2){
        board[y][x] = 'Q';
        colomn[x] = true;//attack
        diagnal_1[x+y] = true;
        diagnal_2[x-y+n-1] = true;
    }
    void undoPlace(int x, int y, std::vector<std::string>& board, int n, vector<bool>& colomn, vector<bool>& diagnal_1, vector<bool>& diagnal_2){
        board[y][x] = '.';
        colomn[x] = false;//no attack
        diagnal_1[x+y] = false;
        diagnal_2[x-y+n-1] = false;
    }
    bool attack(int x, int y, std::vector<std::string>& board, int n, vector<bool>& colomn, vector<bool>& diagnal_1, vector<bool>& diagnal_2){
        if(colomn[x] || diagnal_1[x+y] || diagnal_2[x-y+n-1]){
            return true;
        }
        return false;     
    }
    void NqHelper(int x, int y, std::vector<std::vector<std::string> >& result, int n, std::vector<std::string>& board,vector<bool>& colomn, vector<bool>& diagnal_1, vector<bool>& diagnal_2){
        if(y == n){
            result.push_back(board);
            return;
        }
        for(int i = 0;i<n;i++){
            if(attack(i,y,board,n,colomn,diagnal_1,diagnal_2)){continue;}//note: you are incrementing "i" everytime, so i should be your "x"
            placeQ(i,y,board,n,colomn,diagnal_1,diagnal_2);
            NqHelper(0,y+1,result,n,board,colomn,diagnal_1,diagnal_2);
            undoPlace(i,y,board,n,colomn,diagnal_1,diagnal_2);
        }
    }
    
};

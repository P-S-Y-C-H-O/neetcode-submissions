class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        for(int i=0;i<n;i++){
            unordered_set<char>st;
            for(int j=0;j<m;j++){
                if(board[i][j]=='.')continue;
                if(st.contains(board[i][j]))return false;
                st.insert(board[i][j]);
            }
            st.clear();
        }
        for(int j=0;j<m;j++){
            unordered_set<char>st;
            for(int i=0;i<n;i++){
                if(board[i][j]=='.')continue;
                if(st.contains(board[i][j]))return false;
                st.insert(board[i][j]);
            }
            st.clear();
        }
        for(int i=0;i<n;i+=3){
            for(int j=0;j<m;j+=3){
                unordered_set<char>st;
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        if(board[k][l]=='.')continue;
                        if(st.contains(board[k][l]))return false;
                        st.insert(board[k][l]);
                    }
                }
                st.clear();
            }
        }
        return true;
    }
};

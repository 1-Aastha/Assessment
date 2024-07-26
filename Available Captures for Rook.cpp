//sol1: try to shorten this code by using another approach 
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int count=0;
        int rookRow=-1;
        int rookColumn=-1;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(board[i][j]=='R'){
                    rookRow=i;
                    rookColumn=j;
                    break;
                }
            }
        }
           for(int i = rookRow - 1; i >= 0; i--) {
        	if(board[i][rookColumn] == 'B') {
        		break;
        	}else {
        		if(board[i][rookColumn] == 'p') {
        			count++;
        			break;
        		}
        	}
        }
        for(int i = rookRow + 1; i < 8; i++) {
        	if(board[i][rookColumn] == 'B') {
        		break;
        	}else {
        		if(board[i][rookColumn] == 'p') {
        			count++;
        			break;
        		}
        	}
        	
        }
        for(int i = rookColumn - 1; i >= 0; i--) {
        	if(board[rookRow][i] == 'B') {
        		break;
        	}else {
        		if(board[rookRow][i] == 'p') {
        			count++;
        			break;
        		}
        	}
        }
        for(int i = rookColumn + 1; i < 8; i++) {
        	if(board[rookRow][i] == 'B') {
        		break;
        	}else {
        		if(board[rookRow][i] == 'p') {
        			count++;
        			break;
        		}
        	}
        }
        return count;
    }

       
};

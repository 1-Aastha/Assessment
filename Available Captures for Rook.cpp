//sol1: try to shorten this code by using another approach 
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int count=0;
        int rookRow=,int rookColumn;
        for(int i=0;i<8;i++){ //iterate throught the rows and cols of board to find the position of rook
            for(int j=0;j<8;j++){
                if(board[i][j]=='R'){
                    rookRow=i;
                    rookColumn=j;
                    break;
                }
            }
        }
           for(int i = rookRow - 1; i >= 0; i--) {//check rook upper
        	if(board[i][rookColumn] == 'B') {//if bishop is encountered break through the if 
        		break;
        	}else {
        		if(board[i][rookColumn] == 'p') {//if pawn is found, increase counter
        			count++;
        			break;
        		}
        	}
        }
        for(int i = rookRow + 1; i < 8; i++) {//check rook down
        	if(board[i][rookColumn] == 'B') {
        		break;
        	}else {
        		if(board[i][rookColumn] == 'p') {
        			count++;
        			break;
        		}
        	}
        	
        }
        for(int i = rookColumn - 1; i >= 0; i--) {//check rook left
        	if(board[rookRow][i] == 'B') {
        		break;
        	}else {
        		if(board[rookRow][i] == 'p') {
        			count++;
        			break;
        		}
        	}
        }
        for(int i = rookColumn + 1; i < 8; i++) {//check rook right
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


//2 sol:
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int i,j;
        for(i=0;i<8;i++){ //iterate throught the rows and cols of board to find the position of rook
            for( j=0;j<8;j++){
                if(board[i][j]=='R'){
                    break;
                }
            }
        }
int count=0;
//left
//right
//top
//bottom
//return count

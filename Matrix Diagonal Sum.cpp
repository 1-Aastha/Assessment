class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;//diagonal sum
        for(int i =0; i<n;i++){//iterate through each row of matrix
            sum+= mat[i][i]+ mat[i][n-i-1]; //primary diagonal+secondary diagonal
        }
        if(n%2!=0){//checking odd condition 
            return sum -= mat[n/2][n/2];//subtract middle element from the sum as it has been added twice, once in primary diagonal and once in secondary diagonal
        }
        
            return sum;
        
    }
};

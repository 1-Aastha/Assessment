class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
       int start=0;
    int end=(m*n) -1;
    int mid= (start+ end)/2;

    while(start<=end){
    
    mid=(start+ end)/2;

    int rows=mid/m;
    int cols=mid%m;

    if(matrix[rows][cols]==target)
    return true;

    else if(matrix[rows][cols]<target)
    start=mid+1;

    else
    end=mid-1;
    
   


    }
    return false;

    
}
};

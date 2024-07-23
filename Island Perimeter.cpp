//based on matrix
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int total = 0;

        for (int i = 0; i < grid.size(); i++) {

            for (int j = 0; j < grid[i].size(); j++) {
                 //if (grid[i][j] == 1 && (j == 0 || grid[i][j - 1] { //another approach
                    //perimeter++;
                //}

                //if (grid[i][j] == 1 && (i == 0 || grid[i - 1][j] == 0)) {
//perimeter++;
//}
                  if(grid[i][j]==1)    {
                       //check left column
                       if (j==0 || grid[i][j-1]==0)
                           total++;
                           //check right column
                            if (j==grid[i].size()-1 || grid[i][j+1]==0)
                                total++;
                                 //check top column
                                 if (i==0 || grid[i-1][j]==0)
                           total++;
                                  //check bottom column
                            if (i==grid.size()-1 || grid[i+1][j]==0)
                           total++;
                  }        
        }}

        return total;
    }
};

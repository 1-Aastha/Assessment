class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
        int start=0;
        int end=image.size()-1;
        
        while(start<end){
            int temp=image[i][end];
            image[i][end]=image[i][start];
            image[i][start]=temp;
            start++;
            end--;
        }
    }
    for(int i=0; i<image.size(); i++){
        for(int j=0; j<image[i].size();j++){
            if(image[i][j]==1){
                image[i][j]=0;
            }
            else if(image[i][j]==0){
                image[i][j]=1;
            }
        }
    }
    return image;
    }
};

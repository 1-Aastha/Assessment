//binary search 
class Solution {
public:
    int guessNumber(int n) {
        int start = 0;
            int end = n;
            while(start <= end){
                int num =start+(end-start)/2;
                int result=guess(num);
                if(result == 0){
                    return num;
                    break;
                }
                else if(result == 1){
                    start = num+1;
                }
                else if(result==-1){
                   end=num-1;
                }
        }
        return 0;
    }
};

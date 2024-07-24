//1. This is just by using next_permutation(first ieterator, last iterator) func
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());  //it maynot be best to use this code
    }
};

//2
//Actual logical solution
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    //something + descending order -> mtlb next permutation available hai
    //lexicographical order ke basis pe array ki next permutation find krni
        int Index1=-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                Index1=i;
                break;
                 }
        }
        if(Index1==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            int Index2=-1;
            for(int i=nums.size()-1;i>=Index1;i--){
                if(nums[i]>nums[Index1-1]){
                   Index2=i;
                   break;
                }
            }
            swap(nums[Index1-1],nums[Index2]);
            reverse(nums.begin()+Index1,nums.end());
        }
        }
};


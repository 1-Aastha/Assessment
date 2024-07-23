class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxdiff=0;
        sort(nums.begin(),nums.end());
         for(int i=0;i<nums.size()-1;i++){
              int diff=nums[i+1]-nums[i];
              if(diff>maxdiff){
                maxdiff=diff;}
                else{ //this else part can be skipped. The code will fine also without it.
                    if(nums.size()<2) //it is just to make sure if our array hass less than 2 elements then our diff will be zero. This part is not necessary.
                    return 0;
                }
                 }
         return maxdiff;
 }
};

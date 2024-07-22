//1
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=nums[0]; //maximum
          int sum=0;
          for(int i:nums){
            sum+=i;
            m=max(m,sum);
             if(sum<0){
                sum=0;
             }
            
          }
          return m;
    }
};

//2
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
          int currentsum=nums[0];
          int maxsum=nums[0];
          for(int i=1;i<nums.size();i++){
            currentsum=max(nums[i],currentsum+nums[i]);
              maxsum=max(maxsum,currentsum);
              }
          
          return maxsum;
    }
};

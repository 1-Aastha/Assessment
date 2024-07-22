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

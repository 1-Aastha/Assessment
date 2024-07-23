class Solution {
public:
    int search(vector<int>& nums, int target) {
        // for(int i=0; i<nums.size();i++){if(nums[i]==target){ return i;}}
        // return -1;
        // sort(nums.begin(),nums.end());
        // if(binary_search(nums.begin(),nums.end(),target))

        // cout<<target<<endl;

        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int mid;

        while (left <= right) {
            mid = (left + right) / 2;

            if (nums[mid] == target)
                return mid;

            else if (nums[mid] >= nums[left]) {
                if (target <= nums[mid] && target >= nums[left])
                    right = mid - 1;
                else
                    left = mid + 1;
            } else {
                if (target >= nums[mid] && target <= nums[right])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return -1;
    }
};

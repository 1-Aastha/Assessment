int maximumGap(int* nums, int numsSize) {
   if (numsSize < 2) {
        return 0;
   }

    
   for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

  
    int maxGap = 0;
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i + 1] - nums[i] > maxGap) {
          maxGap = nums[i + 1] - nums[i];
       }
    }
    
    return maxGap;
}

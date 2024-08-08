int search(vector<int> &nums, int target) {
    int n=nums.size();
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}


/*approach
Since our array is sorted, we can apply binary search here. We will keep two variables, ‘s’ and ‘e’, initially assigned to ‘0’ and ‘length of the array’, respectively. At each iteration, we will first calculate the middle value of ‘s’ and ‘e’ and store it in a variable called ‘mid’. Then we will check the following conditions:

    nums[mid] == target:
    We have found our answer in this case, so that we will return the index.
    nums[mid] > target:
    In this case, the current value is greater than the ‘target’, so we will go to the smaller values.
    nums[mid] < target:
    In this case, the current value is smaller than the ‘target’, so we will go to the larger values.
     

If we don’t find any index, we will return ‘-1’.

 
The steps are as follows:-
 

Function to find the element ‘target’

function search(int[] nums, int n, int target):

    Int ‘n’ is the size of the array ‘nums’, and ‘target’ is the element we want to find.
    Initialize two variables, ‘s’ and ‘e’, initially assigned to ‘0’ and ‘n - 1’, respectively.
    while ‘s <= e’:
        Initialize a variable ‘mid’, and assign it to ‘(s + e) / 2’.
        If ‘nums[mid] == target’:
            Return ‘mid’.
        else if ‘nums[mid] > target’:
            Assign ‘e’ to ‘mid - 1’.
        else:
            Assign ‘s’ to ‘mid + 1’.
    Return -1.
*/

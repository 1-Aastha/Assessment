class Solution {
public:
   vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ob;
    for (int i = 0; i < nums1.size(); ++i) {
        bool found = false;
        for (int j = 0; j < nums2.size(); ++j) {
            if (nums2[j] == nums1[i]) {
                // Find the next greater element
                for (int k = j + 1; k < nums2.size(); ++k) {
                    if (nums2[k] > nums1[i]) {
                        ob.push_back(nums2[k]);
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    ob.push_back(-1);
                }
                break; // Move to the next element in nums1
            }
        }
    }
    return ob;
}
};

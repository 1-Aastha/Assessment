/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//.Kth Smallest Element in a BST
//1st approach using vector
class Solution {
public:
vector<int>v;
vector<int>inorder(TreeNode* root) {
    if(root != NULL){
    inorder(root->left);
    v.push_back(root->val);
    inorder(root->right);
    }
    return v;
    }
    int target;
    int kthSmallest(TreeNode* root, int k) {
    vector<int>res;
    res = inorder(root);
    return res[k-1];
}

};/2nd approach
// class Solution {
// public:
//     int count=0;
//     int result=-1;
//     void inorder(TreeNode* root, int k) {
//         if (root == NULL || count >= k) {
//             return;
//         }
//         inorder(root->left, k);
//         count++;
//         if (count == k) {
//             result = root->val;
//             return;
//         }
//         inorder(root->right, k);
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         inorder(root, k);
//         return result;
//     }
// };


//3rd approach
class Solution {
public:
    int count=0,m=0;
    void inorder(TreeNode* root, int k) {
        if (root != NULL) {
        inorder(root->left, k);
        count++;
        if (count == k) {
            m=root->val;
            return;
        }
        inorder(root->right, k);
    }
    
}
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return m;
    }
};

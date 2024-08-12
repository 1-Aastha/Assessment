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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>>v;
        if(root==NULL)
        return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
           
           vector<int>v1;
           int size=q.size();
            for(int i=0;i<size;i++){
            TreeNode* temp=q.front();
            q.pop();
            v1.push_back(temp->val);
            if(temp->left!=NULL)
            q.push(temp->left);
            if(temp->right!=NULL)
            q.push(temp->right);
            }
            v.push_back(v1);
        }
        return v;
    }
};
/*Level Order Traversal Algorithm:

    Create a empty queue for level order traversal
    Push root node in the queue
    Run a loop untill queue not become empty
    Pop the first node from the queue and display the value of that node.
    Now check node left is null or not. If null push left node in queue
    Now check node right is null or not. If null push right node in queue*/

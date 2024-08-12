/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//1st solution
class Solution {
public:
    void getAncestor(TreeNode* root, TreeNode* node,vector<TreeNode*> &v){
        if(root->val == node->val){
            v.push_back(root);

        }
        if(root->val != node->val){
            if(node->val < root->val)
                getAncestor(root->left,node,v);
        else
                getAncestor(root->right,node,v);
            v.push_back(root);

        }
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>a1,a2;
       getAncestor(root,p,a1);
        getAncestor(root,q,a2);
         TreeNode* ans;

    for (TreeNode* t:a2) {

      if (find(a1.begin(),a1.end(),t)!=a1.end()){

        ans=t;

        break;

    }
    }
    return ans;
    
    }
};

//2nd sulution
class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
        return NULL;
        else if(p->val<root->val && q->val<root->val)
        return lowestCommonAncestor(root->left,p,q);
       else if(p->val>root->val && q->val>root->val)
        return lowestCommonAncestor(root->right,p,q);
        else
        return root;
    }
};


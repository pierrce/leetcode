/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {

        //If t1 is null make it t2
        if(t1 == NULL)
            return t2;

        if(t2 == NULL)
            return t1;

        //Add existing nodes together
        t1->val = t1->val+t2->val;

        //If we're at a leaf return
        if(t2->left == NULL && t2->right == NULL)
            return t1;

        if(t2->left == NULL && t1->left != NULL)
            t2->left = new TreeNode(0);
        if(t2->right == NULL && t1->right != NULL)
            t2->right = new TreeNode(0);
        if(t1->left == NULL && t2->left != NULL)
            t1->left = new TreeNode(0);
        if(t1->right == NULL && t2->right != NULL)
            t1->right = new TreeNode(0);

        //Merge next nodes
        if(t1->left != NULL && t2->left != NULL)
            mergeTrees(t1->left, t2->left);
        if(t1->right != NULL && t2->right != NULL)
            mergeTrees(t1->right, t2->right);

        return t1;
    }
};

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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {

        //If we're at leaf node return.
        if(nums.size() == 1){
            return new TreeNode(nums[0]);
        }//end if

        //Get largest element in vector.
        auto it = max_element(nums.begin(), nums.end());

        //Create root node.
        TreeNode* root = new TreeNode(*it);

        //End Edge Case
        if(nums.end() == it){
            vector<int> numsL (nums.begin(), it-1);
            root->left = constructMaximumBinaryTree(numsL);
            root->right = NULL;
            return root;
        }//end if

        //Beginning Edge Case
        if(nums.begin() == it){
            vector<int> numsR (it+1, nums.end());
            root->left = NULL;
            root->right = constructMaximumBinaryTree(numsR);
            return root;
        }//end if

        //Get left and right subvectors.
        vector<int> numsLeft (nums.begin(), it-1);
        vector<int> numsRight(it+1, nums.end());

        //Set left and right nodes.
        root->left = constructMaximumBinaryTree(numsLeft);
        root->right = constructMaximumBinaryTree(numsRight);

         return root;
    }//end function
};//end class

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
    int maxDepth(TreeNode* root) {
        int ans = 0;
        int max = 0;
        traverse(root,ans,max);
        return max;
    }
    private:
    void traverse(TreeNode* node, int & depth, int & max){
        if(!node){
            return;
        }
        depth++;
        if(!node->left && !node->right){
            if(max < depth){
                max = depth;
            }
            
        }
        traverse(node->left,depth,max);
        traverse(node->right,depth,max);
        depth--;
    }
};

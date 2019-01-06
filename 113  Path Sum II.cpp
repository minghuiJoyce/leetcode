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
    void treeSum(TreeNode* node,int sum,std::vector<int> & pathStack,std::vector<std::vector<int> > & result,int target){
        
        if(!node){
            return;
        }
        pathStack.push_back(node->val);
        sum = sum + node->val;

        treeSum(node->left,sum,pathStack,result,target);
        treeSum(node->right,sum,pathStack,result,target);
        if(node->left == NULL && node->right == NULL && sum == target){
            result.push_back(pathStack);
        }
        sum = sum-pathStack.back();
        pathStack.pop_back();
       
    }
    
private:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        //pre-order
        std::vector<int> pathStack;
        std::vector<std::vector<int> > result;
        treeSum(root,0,pathStack,result,sum);
        return result;

        
    }
};

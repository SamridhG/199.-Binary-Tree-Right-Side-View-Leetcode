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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        queue<TreeNode *>A;
        if(root!=NULL)
        {
        A.push(root);
        while(!A.empty())
        {
            int size=A.size();
            for(int i=0;i<size;i++)
            {
                TreeNode *temp=A.front();
                A.pop();
                if(i==0)
                {
                    res.push_back(temp->val);
                }
                if(temp->right)A.push(temp->right);
                if(temp->left)A.push(temp->left);
            }
        }
        }
        return res;
    }
};

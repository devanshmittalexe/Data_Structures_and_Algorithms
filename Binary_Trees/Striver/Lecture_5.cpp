// Leetcode 144

class Solution {
    public:
        vector<int> preorderTraversal(TreeNode* &root) {
            // preorder traversal without using recursion but stack
            stack<TreeNode *>s;
            s.push(root);
            vector<int>a;
            if(root==NULL) return a;
            while(!s.empty()){
                TreeNode * z=s.top();
                s.pop();
                a.push_back(z->val);
                if(z->right!=NULL) s.push(z->right);
                if(z->left!=NULL) s.push(z->left);
            }
            return a;
        }
    };
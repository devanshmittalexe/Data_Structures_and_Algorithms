// completed on coding ninjas
// All tree traversals


vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    stack<pair<TreeNode*,int>>s;
    pair<TreeNode*,int>a={root,1};
    s.push(a);
    vector<int>pre;
    vector<int>post;
    vector<int>ino;

    while(!s.empty()){
        if(s.top().second == 1){
            pre.push_back(s.top().first->data);
            s.top().second++;
            if(s.top().first->left!=NULL) s.push({s.top().first->left,1});
        }
        if(s.top().second == 2){
            ino.push_back(s.top().first->data);
            s.top().second++;
            if(s.top().first->right!=NULL) s.push({s.top().first->right,1});
        }
        if(s.top().second == 3){
            post.push_back(s.top().first->data);
            s.pop();
        }
    }
    vector<vector<int>>ans;
    ans.push_back(ino);
    ans.push_back(pre);
    ans.push_back(post);
    return ans;
}
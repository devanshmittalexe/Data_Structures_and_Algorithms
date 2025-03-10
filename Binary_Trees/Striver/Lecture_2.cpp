// completed on GFG 

class Solution{
    public:
        void solve(int i,vector<int>&vec,queue<node *>&t){
            if(i>=vec.size()) return;
            node* temp=t.front();
            node * l=newNode(vec[i]);
            temp->left=l;
            i++;
            t.push(l);
            if(i<vec.size()){
                node * r=newNode(vec[i]);
                temp->right=r;
                i++;
                t.push(r);
            }
            t.pop();
            solve(i,vec,t);
        }
        void create_tree(node* root0, vector<int> &vec){
            queue<node *>t;
            t.push(root0);
            solve(1,vec,t);
        }
    
    };
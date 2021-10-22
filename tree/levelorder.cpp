
class Solution
{
    public:
    
    vector<int> levelOrder(Node* node)
    {
        vector<int> a;
        Node* curr=node;
        queue<Node*> q;
        q.push(curr);
        while(q.empty()!=true)
        {
                curr=q.front();
                q.pop();
                 a.push_back(curr->data);
                if(curr->left!=NULL)
                q.push(curr->left);
                if(curr->right!=NULL)
                q.push(curr->right);
        }
        return a;
    }
};

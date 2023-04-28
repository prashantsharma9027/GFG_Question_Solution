class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int,vector<int>> store;
        queue<pair<Node* , int>> q;
        q.push({root , 0});
        while(!q.empty())
        {
            auto p = q.front();
            Node * curr = p.first;
            int hd = p.second;
            q.pop();
            store[hd].push_back(curr->data);
            if(curr->left != NULL)
                q.push({curr->left , hd-1});
            if(curr->right != NULL)
                q.push({curr->right , hd+1});
        }
        vector<int> ans;
        for(auto i : store)
        {
            ans.insert(ans.end(),i.second.begin(),i.second.end());
        }
        return ans;
    }
};
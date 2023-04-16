class Solution {
    private:
    void solve(Node* root , vector<int>&ans)
    {
        if(root == NULL)
        {
            return;
        }
        
        solve(root->left , ans);
        ans.push_back(root->data);
        solve(root->right , ans);
    }

  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> ans;
        solve(root , ans);
          
        return ans;
    }
};
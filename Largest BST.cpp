struct info
{
    int maxi;
    int mini;
    bool isBST;
    int size;
}; 

info solve(Node* root , int& ans)
{
    if(root == NULL)
    {
        return {INT_MIN, INT_MAX , true , 0}; 
    }
    
    info left = solve(root->left , ans);
    info right = solve(root->right , ans);
    
    info CurrNode;
    
    CurrNode.size = left.size + right.size + 1;
    CurrNode.maxi = max(root->data , right.maxi);
    CurrNode.mini = min(root->data , left.mini);
    
    if(left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini))
    {
        CurrNode.isBST = true;
    }
    else
    {
        CurrNode.isBST = false;
    }
    
    if(CurrNode.isBST)
    {
        ans = max(ans , CurrNode.size);
    }
    
    return CurrNode;
}
class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
     
    int largestBst(Node *root)
    {
        int ans = 0;
        info temp = solve(root ,ans );
        
        return ans;
    }
};
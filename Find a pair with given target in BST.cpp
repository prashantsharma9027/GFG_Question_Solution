class Solution{
private: 
    void solve(Node * root , vector<int> &in)
    {
        if(root == NULL)
        {
            return;
        }

        solve(root->left , in);
        in.push_back(root->data);
        solve(root->right , in);
    }
    
  public:
    // root : the root Node of the given BST
    // target : the target sum
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
        vector<int> in;
        solve(root , in);

        int i = 0;
        int j = in.size()-1;

        while(i<j)
        {
            int sum = in[i] + in[j];

            if(sum == target) return 1;
            else if(sum>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        } 

        return 0; 
    
    }
};
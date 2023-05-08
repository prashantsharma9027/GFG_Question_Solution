class Solution
{
    public:
    vector<int> vec;
    void lob(Node *root){
        if(root){
            vec.push_back(root->data);
            lob(root->left);
            lob(root->right);
        }
    }
    vector<int> merge(Node *root1, Node *root2)
    {
       lob(root1);
       lob(root2);
       sort(vec.begin(), vec.end());
       return vec;
    }
};
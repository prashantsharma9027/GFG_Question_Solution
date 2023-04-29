class Solution
{
    private:
    void solve(Node* root,int sum,int len,int &Maxsum,int &Maxlen)
    {
        if(root == NULL)
        {
            if(len>Maxlen)
            {
                Maxlen = len;
                Maxsum = sum;
            }
            else if(len == Maxlen)
            {
                Maxsum = max(Maxsum , sum);
            }
            return;
        }
        
        sum = sum + root->data;
        
        solve(root->left , sum , len+1,Maxsum,Maxlen);
        solve(root->right , sum , len+1,Maxsum,Maxlen);
    }
public:
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int sum = 0;
        int Maxsum = 0;
        
        int len = 0;
        int Maxlen = 0;
        
        solve(root ,sum ,len , Maxsum , Maxlen );
        
        return Maxsum;
    }
};
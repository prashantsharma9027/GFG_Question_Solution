int findposition(int in[] ,int n , int element)
{
    for(int i = 0 ; i<n ; i++)
    {
        if(in[i] == element)
        {
            return i;
        }
    }
    return -1;
}

Node* solve(int in[] , int post[] , int &index , int inorderStart , int inorderEnd , int n)
{
    if(index < 0 || inorderStart>inorderEnd) return NULL;
        
    int element = post[index--];
    Node * root = new Node(element);
    int position = findposition(in,n,element);
        
    root->right = solve(in , post , index , position + 1 , inorderEnd , n);
    root->left = solve(in , post , index , inorderStart , position - 1 , n);
    
    return root;
        
}

Node *buildTree(int in[], int post[], int n) {
    // Your code here
    int postorderIndex = n-1;
    Node* ans = solve(in,post,postorderIndex,0,n-1,n);
        
    return ans;
    
}
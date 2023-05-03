int minval(Node*root)
{
    Node*temp = root;
    
    while(temp->left!=NULL)
    {
        temp = temp->left;
    }
    
    return temp->data;
}
Node *deleteNode(Node *root, int X) {
    // your code goes here
    if(root == NULL)
    {
        return root;
    }
    
    if(root->data == X)
    {
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        
        if(root->left != NULL && root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        
        else if(root->left == NULL && root->right != NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        
        else if(root->left != NULL && root->right != NULL)
        {
            int mini = minval(root->right);
            root->data = mini;
            root->right = deleteNode(root->right , mini);
            return root;
        }
    }
    else if(root->data > X)
    {
        root->left = deleteNode(root->left , X);
        return root;
    }
    else
    {
        root->right = deleteNode(root->right , X);
        return root;
    }
}
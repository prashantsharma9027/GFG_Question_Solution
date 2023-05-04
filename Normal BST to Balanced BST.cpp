  void inorder(Node* root , vector<int> &inorderVal){
        if(root == NULL)
            return ;
        
        inorder(root->left , inorderVal);
        inorderVal.push_back(root->data);
        inorder(root->right , inorderVal);
    }
    
    Node* inorderToBST(int s , int e , vector<int> &inorderVal){
        if(s > e)
            return NULL;
        
        int mid = (s+e)/2;
        
        Node* temp = new Node(inorderVal[mid]);
        temp->left = inorderToBST(s , mid-1 , inorderVal);
        temp->right = inorderToBST(mid+1 , e , inorderVal);
        
        return temp;
    }
    
Node* buildBalancedTree(Node* root)
{
	// Code here
	vector<int> inorderVal;
    inorder(root , inorderVal);
        
    return inorderToBST(0 , inorderVal.size()-1 , inorderVal);
}

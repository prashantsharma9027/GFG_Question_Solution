class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int>ans;
    	if(root == NULL) return ans;
    	
    	queue<Node*>q;
    	q.push(root);
    	
    	bool LeftToRight = true;
    	
    	while(!q.empty())
    	{
    	    
    	    int size = q.size();
    	    vector<int> temp(size);
    	    
    	    for(int i = 0; i<size ; i++)
    	    {
    	        Node *frontNode = q.front();
    	        q.pop();
    	        
    	        int index = LeftToRight ? i : size-1-i;
    	        temp[index] = frontNode->data;
    	        
    	        if(frontNode->left) q.push(frontNode->left);
    	        if(frontNode->right) q.push(frontNode->right);
    	    }
    	    
    	    LeftToRight = !LeftToRight;
    	    
    	    for(auto i : temp)
    	    {
    	        ans.push_back(i);
    	    }
    	}
    	
    	return ans;
    }
};
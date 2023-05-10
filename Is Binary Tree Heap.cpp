class Solution {
  int countnodes(struct Node* tree)
  {
      if(tree == NULL) return 0;
      
      int ans = countnodes(tree->left) + countnodes(tree->right) + 1;
      
      return ans;
  }
  
  bool isCBT(struct Node* tree , int index , int n)
  {
      if(tree == NULL)
      {
          return true;
      }
      
      if(index>=n)
      {
          return false;
      }
      else
      {
          bool left = isCBT(tree->left , 2*index + 1 , n);
          bool right = isCBT(tree->right , 2*index + 2 , n);
          
          if(left && right) return true;
      }
      return false;
  }
  
  bool isMaxOrder(struct Node* tree)
  {
      if(tree->left == NULL && tree->right == NULL)
      {
          return true;
      }
      if(tree->right == NULL)
      {
          if(tree->data > tree->left->data) return true;
      }
      else
      {
          bool left = isMaxOrder(tree->left);
          bool right = isMaxOrder(tree->right);
          
          return (left && right &&(tree->data > tree->left->data && tree->data > tree-> right->data));
      }
  }
  public:
    bool isHeap(struct Node* tree) {
        // code here
        int n = countnodes(tree);
        int index = 0;
        
        
        if(isCBT(tree,index,n)  && isMaxOrder(tree))
            return true;
            
        return false;    
        
    }
};
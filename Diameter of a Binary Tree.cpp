class Solution {
  public:
  
//   int height(Node* root)
//   {
//       if(root == NULL)
//       {
//           return 0;
//       }
      
//       int left = height(root->left);
//       int right = height(root->right);
      
//       int ans = max(left , right) + 1;
//       return ans;
//   }

    pair<int,int> fastdiameter(Node * root)
    {
        if(root == NULL)
        {
            pair<int , int> p = make_pair(0,0);
            return p;
        }
        
        pair<int , int> left = fastdiameter(root->left);
        pair<int , int> right = fastdiameter(root->right);
        
        int ob1 = left.first;
        int ob2 = right.first;
        int ob3 = left.second + right.second + 1;
        
        pair<int , int> ans;
        ans.first = max(ob1 , max(ob2 , ob3));
        ans.second = max(left.second , right.second) + 1;
        
        return ans;
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        
        // if(root == NULL)
        // {
        //     return 0;
        // }
        
        // int ob1 = diameter(root->left);
        // int ob2 = diameter(root->right);
        // int ob3 = height(root->left) + height(root->right) + 1;
        
        // int res = max(ob1 , max(ob2 , ob3)) ;
        
        // return res;
        
        return fastdiameter(root).first;
    }
};
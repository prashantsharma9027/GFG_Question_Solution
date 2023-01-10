//https://practice.geeksforgeeks.org/problems/d7e0ce338b11f0be36877d9c35cc8dfad6636957/1

class Solution {
  public:
        int sum(Node *node)
        {
            if(node==NULL)
            return 0;   

            int d=node->data;
            node->data=sum(node->left)+sum(node->right);     
            
            return node->data+d;       
        }

        void toSumTree(Node *node)
        {
            sum(node);
        }
};
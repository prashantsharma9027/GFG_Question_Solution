class Solution {
  private:
    Node * mapping(Node* root , int target , map<Node*,Node*> &nodeToParent)
    {
        Node* res = NULL;
        queue<Node*>q;
        q.push(root);
        nodeToParent[root] = NULL;
        
        while(!q.empty())
        {
            Node * front = q.front();
            q.pop();
            
            if(front->data == target)
                res = front;
            
            if(front->left)
            {
                nodeToParent[front->left] = front;
                q.push(front->left);
            }
            
            if(front->right)
            {
                nodeToParent[front->right] = front;
                q.push(front->right);
            }
        }
        
        return res;
        
    }
    
    int burntree(Node* root , map<Node*,Node*>nodeToParent)
    {
        map<Node*,bool> visited;
        queue<Node*>q;
        q.push(root);
        visited[root] = true;
        
        int ans = 0;
        
        while(!q.empty())
        {
            int flag = 1;
            int size = q.size();
            
            for(int i = 0 ; i<size;i++)
            {
                Node* front = q.front();
                q.pop();
                
                if(front->left && !visited[front->left])
                {
                    flag = 0;
                    q.push(front->left);
                    visited[front->left] = true;
                }
                
                if(front->right && !visited[front->right])
                {
                    flag = 0;
                    q.push(front->right);
                    visited[front->right] = true;
                }
                
                if(nodeToParent[front] && !visited[nodeToParent[front]])
                {
                    flag = 0;
                    q.push(nodeToParent[front]);
                    visited[nodeToParent[front]] = true;
                }
            }
            
            if(flag == 0)
            {
                ans++;
            }
        }
        
        return ans;
    }
    
  public:
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        map<Node*,Node*> nodeToParent;
        
        Node* targetNode = mapping(root , target,nodeToParent);
        
        int ans = burntree(targetNode , nodeToParent);
        
        return ans;
        
    }
};
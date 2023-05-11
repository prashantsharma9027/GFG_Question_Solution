class node{
    public:
    int data ;
    int row;
    int col;

    node(int d , int r , int c)
    {
        this->data = d;
        row = r;
        col = c;
    }
};

class compare{
    public:
        bool operator()(node* a , node*b)
        {
            return a->data > b->data;
        }
};

class Solution{
    public:
    pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
    {
          //code here


        priority_queue<node* , vector<node*> , compare> minHeap;

    
       int currRange = INT_MAX;

        int maxi = INT_MIN;
        int mini = INT_MAX;

        for(int i = 0 ; i<k;i++)
        {
            maxi = max(KSortedArray[i][0] , maxi);
            mini = min(KSortedArray[i][0] , mini);
            node* temp = new node(KSortedArray[i][0] , i , 0);
            minHeap.push(temp);
        }

        int start = mini;
        int end = maxi;

        while(minHeap.size() > 0)
        {
            node* temp = minHeap.top();
            minHeap.pop();
            mini = temp->data;

            if(maxi - mini < currRange)
            {
                start = mini;
                end = maxi;
                  currRange = maxi - mini;
            }
            if(temp->col + 1 == n)
            {
                break;
            }
            
            maxi = max(maxi , KSortedArray[temp->row][temp->col+1]);
            node * newNode = new node(KSortedArray[temp->row][temp->col+1] , temp->row , temp->col+1);
            minHeap.push(newNode);
        }

        return {start , end};
    }
};
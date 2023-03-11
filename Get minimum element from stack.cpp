class Solution{
    int mini;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
        if(s.empty())
            return -1;
        
        return mini;
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(s.empty()){
            return -1;
        }
        
        int curr = s.top();
        s.pop();
        if(curr > mini) {
            return curr;
        }
        else
        {
            int prevMin = mini;
            int val = 2*mini - curr;
            mini = val;
            return prevMin;
           }
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here 
           if(s.empty()) {
            s.push(x);
            mini = x;
        }
        else
        {
         	if(x < mini) {
                s.push(2*x - mini);
                mini = x;
            }   
            else
            {
                s.push(x);
            
           }
       }
}
           
       };
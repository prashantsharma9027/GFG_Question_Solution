class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        
        while (!input.empty()) 
        {
          output.push(input.top());
          input.pop();
        }
   
        input.push(x);
  
        while (!output.empty()) 
        {
          input.push(output.top());
          output.pop();
        }
    }

    int dequeue() {
        
        if(input.empty()) return -1;
        
        int n = input.top();
        input.pop();
        
        return n;
    }
};
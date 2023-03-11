void MyQueue :: push(int x)
{
        // Your Code
        
        if(rear!= 100005){
            
            arr[rear]=x;
            rear++;
        }
        
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code 
        int x=-1;
        if(rear!=front){
            x=arr[front];
            front++;
        }
        return x;
}
void MyQueue:: push(int x)
{
        // Your Code
    QueueNode * temp = new QueueNode(x);
    
    if(rear == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = rear->next;
    }
    
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code  
        if(front == NULL)
        {
            return -1;
        }
        
        QueueNode * temp = front;
        
        int n = front->data;
        
        front = front->next;
        
        if(front == NULL)
        {
            rear = NULL;
        }
        
        delete(temp);

        return n;    
}
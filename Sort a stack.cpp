/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedInsert(stack<int> & SortedStack , int element)
{
    if(SortedStack.empty() || SortedStack.top() < element)
    {
        SortedStack.push(element);
        return;
    }
    
    int n = SortedStack.top();
    SortedStack.pop();
    
    SortedInsert(SortedStack , element);
    SortedStack.push(n);
}

void sortStack( stack<int> &s)
{
    if(s.empty())
   {
       return;
   }
   
   int num = s.top();
   s.pop();
   
   sortStack(s);
   SortedInsert(s , num);
}
void SortedStack :: sort()
{
    sortStack(s);
   //Your code here
}
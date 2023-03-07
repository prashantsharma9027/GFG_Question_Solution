char* reverse(char *S, int len)
{
    //code here
    stack<char> s;
    char *str = new char[len];
    
    for(int i = 0 ; i< len ; i++)
    {
        int num = S[i];
        s.push(num);
    }

    int i = 0;
    
    while(!s.empty())
    {
        str[i++] =  s.top();
        s.pop();
    }
    
    return str;
}
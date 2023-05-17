void insert(struct TrieNode *root, string key)
{
    // code here
    if(key.size() == 0)
    {
        root->isLeaf = true;
        return;
    }
    
    int index = key[0] - 'a';
    
    TrieNode* child;
    
    if(root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else
    {
        child = new TrieNode();
        root->children[index] = child;
    }
    
    insert(child , key.substr(1));
}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) 
{
    // code here
    if(key.size() == 0)
    {
        return root->isLeaf;
    }
    
    int index = key[0] - 'a';
    
    TrieNode* child;
    
    if(root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else
    {
        return false;
    }
    
    return search(child , key.substr(1));
}
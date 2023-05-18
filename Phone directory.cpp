class TrieNode{
public:
    char data;
    TrieNode*children[26];
    bool isTerminal;
    // int childcount;

    TrieNode(char ch)
    {
        data = ch;
        for(int i=0; i<26; i++)
        {
            children[i] = NULL;
        }
        // childcount = 0;
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode*root; 
    Trie(char ch) 
    {
        root = new TrieNode(ch);
    }
    
    void insertWord(TrieNode* root ,string word) {
        if(word.length()== 0)
        {
            root->isTerminal = true;
            return ;
        }

        int index = word[0]-'a';
        TrieNode*child;

        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else 
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        insertWord(child,word.substr(1));
    }

    void insert(string word) {
        insertWord(root,word);
    }
    
    
    void printSuggestions(TrieNode* curr , vector<string>&temp , string prefix)
    {
        if(curr->isTerminal)
        {
            temp.push_back(prefix);
        }
        
        
        for(char ch = 'a' ; ch <= 'z' ; ch++)
        {
            TrieNode * next = curr->children[ch -'a'];
            
            if(next != NULL)
            {
                prefix.push_back(ch);
                printSuggestions(next , temp , prefix);
                prefix.pop_back();
            }
        }
    }
    
    
    vector<vector<string>> getSuggestions(string str)
    {
        vector<vector<string>> ans;
        string prefix ="";
        TrieNode * prev = root;
        
        int i = 0;
        for(int i = 0 ; i<str.length();i++)
        {
            char lastch = str[i];
            prefix.push_back(lastch);
            
            TrieNode* curr = prev->children[lastch-'a'];
            
            
            if(curr == NULL)
            {
                break;
            }
            vector<string>temp;
            
            printSuggestions(curr , temp , prefix);
            ans.push_back(temp);
            
            temp.clear();
            
            
            prev = curr;
        }
        
        
        if(i< str.size())
        {
            while( i < str.size())
            {
                ans.push_back({"0"});
                i++;

            }
        }
        
        return ans;
    }
    
};
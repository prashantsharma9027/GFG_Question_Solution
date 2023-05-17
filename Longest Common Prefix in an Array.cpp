class Solution {
public:
    string longestCommonPrefix(string arr[], int N) {
           string s = arr[0];
           string ans ="";
           int k =0;
           for(auto it: s)
           {
               for(int i =1;i<N;i++)
               {
                    if(it==arr[i][k])
                       continue;
                    else if(ans.size()==0)
                            return "-1";
                    return ans;
               }
               
               ans +=it;
               k++;
           }
           return ans;
    }
};
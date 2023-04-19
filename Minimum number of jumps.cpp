class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
    
        int jump = 0;

        int curr = 0;

        int count = 0;

        for(int i=0;i<n - 1;i++){

            int sum = i+arr[i];

            jump = max(jump,sum);

            if (i==curr){

                count++;

                curr=jump;

            }

        }

        if(curr<n-1){

            return -1;

        }

        return count;
    }
};
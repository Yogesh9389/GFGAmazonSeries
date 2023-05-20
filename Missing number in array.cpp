class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        sort(array.begin(),array.end());
        int temp = 1; 
        int i = 0;
        while(temp<=n){
            if(array[i] == temp){
                temp++;
                i++;
            }
            else{
                n = temp;
                temp++;
                i++;
            }
        }
        return n;
    }
};
class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        // code here
        bool flag = true;
        int i=0;
        while(i<n){
            if(flag == true && arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                flag = false;i++;
            }
            else{
                flag = false;i++;
            }
            if(flag == false && arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
                flag = true;i++;
            }
            else{
                flag = true;i++;
            }
        }
        
    }
};
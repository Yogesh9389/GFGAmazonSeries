class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        int temp =0;
        for(int i=0; i<n; i++){
            if(i == n-1){
                if(n%2==0){
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                    i++;
                }
                else{
                    break;
                }
            }
            temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                    i++;
        }
        
    }
};
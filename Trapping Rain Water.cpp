class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long water =0;
        int lmax = arr[0];
        int rmax = arr[n-1];
        int lpos = 0;
        int rpos = n-1;
        while(lpos <= rpos){
            if(arr[lpos] >= lmax){
                lmax = arr[lpos];
                lpos++;
            }
            else if(arr[rpos] >= rmax){
                rmax = arr[rpos];
                rpos--;
            }
            else if(lmax <= rmax && arr[lpos] < lmax){
                water += lmax - arr[lpos];
                lpos++;
            }
            else{
                water += rmax - arr[rpos];
                rpos--;
            }
        }
    
        
        return water;
    }
};
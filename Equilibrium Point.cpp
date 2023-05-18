class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        int sum =0;        //total sum
        int r_sum =0;      //right sum
        int pre_sum =0;   //prefix sum
        for(int i=0; i<n; i++)
        {
            sum += a[i];
        }
        for(int i=0; i<n; i++)
        {
           r_sum = sum - pre_sum - a[i];
           if(pre_sum == r_sum)
           {
               return i+1;
           }
           else
           {
                pre_sum += a[i];        
           }
         }
         return -1;
          
        
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
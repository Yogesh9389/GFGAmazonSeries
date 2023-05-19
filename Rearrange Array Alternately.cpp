class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	vector<int> v;
    	int j=n-1;
    	for(int i=0; i<n; i++){
            v.push_back(arr[j]);
            v.push_back(arr[i]);
            j--;
    	}
    	for(int i=0; i<n; i++){
    	    arr[i] = v[i];
    	}
     	 
    }
};
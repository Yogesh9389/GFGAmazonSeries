class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	vector<int> v;
    	vector<int> w;
    	for(int i=0; i<n; i++){
    	    v.push_back(arr[i]);
    	}
    	for(int i=0; i<n; i++){
    	    w.push_back(dep[i]);
    	}
    	sort(v.begin(),v.end());
    	sort(w.begin(),w.end());
    	int maxi = 0;
    	int count =0;
    	int j=0;
    	int i=0;
    	while(i<n){
    	    if(v[i] <= w[j]){
    	        count += 1;
    	        maxi = max(maxi,count);
    	        i++;
    	        
    	    }
    	    else if(v[i] > w[j]){
    	        count -= 1;
    	        j++;
    	        
    	    }
    	}
    	return maxi;
    }
};

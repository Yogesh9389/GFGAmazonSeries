class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        
       for(int i=0; i<n; i += k){
           
           if(i+k < n)
           {
               reverse(arr.begin()+i, arr.begin()+i+k);
           }
           else
           {
               reverse(arr.begin()+i, arr.end());
           }
        }
        return;
    }
};

// Second Approch
class Solution{
public:
    void reverse(vector<long long>& arr, int i, int j){
        while(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        return;
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        
       for(int i=0; i<n; i += k){
           
          int j = (i+k-1<n?i+k-1:n-1);
          reverse(arr,i,j);
        }
        return;
    }
};
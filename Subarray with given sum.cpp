
//Less Optimized 

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
       long long sum =0;
       int j = 0;
       int i =0;
       vector<int> v;
       while(i<n && j<n){
           sum += arr[j];
           if(sum == s)
                break;
                
            else if(sum > s){
                i++;
                j = i;
                sum = 0;
            }
            else{
                j++;
            }
       }
       if(sum != s){
           v.push_back(-1);
       }
       else{
       v.push_back(i+1);
       v.push_back(j+1);
       }
        return v;
    }
};



// More Optimized

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
       long long sum = arr[0];
       int j = 0;
       int i =0;
       bool found = false;
       vector<int> v;
       if(s == 0){
           v.push_back(-1);
           return v;
       }
       while(j<n){
          if(sum == s){
              found = true;
              break;
          }
          else if(sum < s){
              j++;
              if(j<n)
                sum += arr[j];
            }
          else{
              sum -= arr[i];
               i++;
          }
           
       }
       if(found){
           v.push_back(i+1);
            v.push_back(j+1);
            return v;
       }
       v.push_back(-1);
        return v;
    }
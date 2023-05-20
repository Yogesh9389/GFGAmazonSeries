class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int ans = 0;
        vector<int> v;
        for(int i=0;i<n; i++){
            v.push_back(arr1[i]);
        }
        for(int i=0; i<m; i++)
        {
            v.push_back(arr2[i]);
        }
        sort(v.begin(),v.end());
        ans = v[k-1];
        return ans;
    }
};
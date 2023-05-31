class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        
        
        vector<vector<int>> ans;
        int buy =0;
        int sell =0;
        for(int i=0; i<n-1; i++){
            if(A[i+1] > A[i]){
                sell++;
            }
            else{
                if(sell > buy){
                    vector<int> v;
                    v.push_back(buy);
                    v.push_back(sell);
                    ans.push_back(v);
                }
                buy = i+1;
                sell = i+1;
            }
        }
        if(sell > buy){
                vector<int> v;
                v.push_back(buy);
                v.push_back(sell);
                ans.push_back(v);
        }
        return ans;
    }
};
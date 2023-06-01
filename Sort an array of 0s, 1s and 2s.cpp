class Solution
{
    public:
    void sort012(int a[], int n)
    {
        //counting sort
        int x=0, b=0, c=0;
        for(int i=0; i<n; i++){
            if(a[i] == 0) x++;
            
            else if(a[i] == 1) b++;
            
            else if(a[i] == 2) c++;
        }
        int i =0, j=0, k=0;
        for(i=0;i<x;i++){
            a[i] = 0;
        }
        for(j=0;j<b;j++){
            a[i] = 1;
            i++;
        }
        for(k=0;k<c;k++){
            a[i] = 2;
            i++;
        }
        
    }
    
};


//***************Optimized solution**********//
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        //optimized approch
        int low = 0;
        int mid=0;
        int hi = n-1;
        while(mid<=hi){
            if(a[mid] == 0){
                swap(a[low], a[mid]);
                low++;
                mid++;
            }
            else if(a[mid] == 1){
                mid++;
            }
            else if(a[mid] == 2){
                swap(a[mid], a[hi]);
                hi--;
            }
        }
    }
    
};
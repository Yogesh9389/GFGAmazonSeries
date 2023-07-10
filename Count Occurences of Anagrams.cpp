class Solution{
public:

    bool allZero(vector<int>& counter)
    {
        for(auto &i : counter)
        {
            if(i != 0)
            {
                return false;
            }
        }
        return true;
    }
	int search(string pat, string txt) {
	    // code here
	    int n =txt.size();
	    int m = pat.size();
	    vector<int> counter(26,0);
	    //counting the frequency of each character in pat
	    for(int i=0; i<m; i++)
	    {
	        char ch = pat[i];
	        counter[ch-'a']++;
	    }
	    int i=0, j=0;
	    int result=0;
	    while(j<n)
	    {
	        counter[txt[j]-'a']--;
	        
	        if(j-i+1 == m)
	        {
	            if(allZero(counter))
	            {
	                result++;
	            }
	            counter[txt[i]-'a']++;
	            i++;
	        }
	        j++;
	    }
	    return result;
	}

};
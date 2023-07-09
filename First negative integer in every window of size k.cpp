vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
         
         vector<long long> ans;
         deque<long long> l;
         int i =0, j=0;
         while(j<N)
         {
             if(A[j] < 0)
             {
                 l.push_back(A[j]);
             }
             
             if(j-i+1 == K)
             {
                 if(l.size() != 0)
                 {
                    ans.push_back(l.front());
                 }
                 else
                 {
                    ans.push_back(0);
                 }
                 if(A[i] == l.front()  && l.size() != 0)
                     {
                        l.pop_front();
                     }
                     i++;
             }
             j++;
         }
         return ans;
                                                 
 }
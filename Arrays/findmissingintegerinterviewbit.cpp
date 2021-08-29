int Solution::firstMissingPositive(vector<int> &v) {
   int n = v.size();
   for(int i=0;i<n;i++)
   {
       if(v[i]>0 && v[i]<=n)
       {
           if(v[v[i]-1]!=v[i])
           {
               swap(v[v[i]-1],v[i]);
               i--;
           }
       }
   }
   for(int i=0;i<n;i++)
   {
       if(v[i]!=i+1)
       {
           return (i+1);
       }
   }
  return (n+1);
}

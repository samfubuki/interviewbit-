int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    if(B>=n)
    {
        return 1;
    }
    int i=0;
    int t=0;
    int ans=0;
    while(i<n)
    {
        int flag=0;
        for(int x=i+B-1;x>=t;x--)
        {
            if(A[x]==1)
            {
                t=x+1;
                flag=1;
                ans++;
                i=x+B;
                break;

            }
        }
        if(i>=n)
        {
          return ans;
        }
        if(flag==0)
        {
            return -1;
        }
    }
}

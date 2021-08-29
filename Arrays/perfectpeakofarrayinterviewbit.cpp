int Solution::perfectPeak(vector<int> &A) {
    int n = A.size();
    int ans = -1;
    int leftarr[n];
    int rightarr[n];
    leftarr[0]=A[0];
    rightarr[n-1]=A[n-1];
    for(int i=1;i<n;i++)
    {
        leftarr[i]=max(A[i],leftarr[i-1]);
    }
    for(int i=n-2;i>=0;i--)
    {
        rightarr[i]=min(A[i],rightarr[i+1]);
    }
    for(int i=1;i<n-1;i++)
    {
        if(A[i]>leftarr[i-1] && A[i]<rightarr[i+1])
        {
            return 1;
        }
    }
    if(ans==-1)
    {
        return 0;
    }
}

int Solution::maximumGap(const vector<int> &v) {
    int n = v.size();
    vector<int> left(n);
    vector<int> right(n);
    left[0] = v[0];
    for(int i=1;i<n;i++)
    {
        left[i]=min(left[i-1],v[i]);
    }
    right[n-1] = v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],v[i]);
    }
    int x=0,y=0,ans=0;
    while(x<n && y<n)
    {
        if(right[y]>=left[x])
        {
            ans = max(ans,y-x);
            y++;
        }
        else
        {
            x++;
        }
    }
    return ans;
}

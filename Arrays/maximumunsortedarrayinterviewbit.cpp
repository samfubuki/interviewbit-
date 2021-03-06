vector<int> Solution::subUnsort(vector<int> &v) {
    int n = v.size();
    int s=-1,e=-1;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        {
            s=i;
            break;
        }
    }
    vector<int> ans;
    if(s==-1)
    {
        ans.push_back(s);
        return ans;
    }
    for(int i=n-1;i>0;i--)
    {
        if(v[i-1]>v[i])
        {
            e=i;
            break;
        }
    }
    int maxval = INT_MIN, minval = INT_MAX;
    for(int i=s;i<=e;i++)
    {
        minval = min(minval,v[i]);
        maxval = max(maxval,v[i]);
    }
    for(int i=0;i<=s-1;i++)
    {
        if(v[i]>minval)
        {
            s=i;
            break;
        }
    }
    for(int i=n-1;i>=e+1;i--)
    {
        if(v[i]<maxval)
        {
            e=i;
            break;
        }
    }
    ans.push_back(s);
    ans.push_back(e);
    return ans;
}

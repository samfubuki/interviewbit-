int Solution::solve(vector<int> &v) {
    int n = v.size();
    sort(v.begin(),v.end());
    if(v[n-1]==0)
    {
        return 1;
    }
    for(int i=0;i<n-1;i++)
    {
        if(v[i]!=v[i+1])
        {
            int cnt = n-i-1;
            if(cnt==v[i])
            {
                return 1;
            }
        }
    }
 return -1;
}

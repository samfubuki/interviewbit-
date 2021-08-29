int Solution::maximumGap(const vector<int> &v) {
    int maxval = *max_element(v.begin(),v.end());
    int minval = *min_element(v.begin(),v.end());
    int n = v.size();
    vector<int> bmax(n-1,INT_MIN);
    vector<int> bmin(n-1,INT_MAX);
    float divide = (float)(maxval-minval)/(float)(n-1);
    for(int i=0;i<n;i++)
    {
        if(minval==v[i] || maxval==v[i])
        {
            continue;
        }
        int index = (v[i]-minval)/divide;
        bmax[index]=max(bmax[index],v[i]);
        bmin[index] = min(bmin[index],v[i]);

    }
    int prev = minval;
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(bmin[i]==INT_MAX)
        {
            continue;
        }
        ans = max(ans,bmin[i]-prev);
        prev=bmax[i];
    }
    ans = max(ans,maxval-prev);
    return ans;
}

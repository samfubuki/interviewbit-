vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    vector<int> ans(n);
    int ind = n-1;
    int l=0;
    int r = n-1;
    while(l<=r)
    {
        int sql = A[l]*A[l];
        int sqr = A[r]*A[r];
        if(sql>sqr)
        {
            ans[ind--] = sql;
            l++;
        }
        else
        {
            ans[ind--] = sqr;
            r--;
        }
    }
 return ans;
}

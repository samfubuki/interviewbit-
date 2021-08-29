vector<int> Solution::getRow(int n) {
    vector<int> ans;
    int i=n+1,res=1;
    for(int j=1;j<=i;j++)
    {
        ans.push_back(res);
        res=res*(i-j)/j;

    }
    return ans;
}

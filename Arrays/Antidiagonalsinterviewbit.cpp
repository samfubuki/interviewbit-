vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int> > ans;
    int n = A.size();
    //upper triangle part
    for(int i=0;i<n;i++)
    {
        int col=i,row=0;
        vector<int> req;
        while(col>=0)
        {
            req.push_back(A[row][col]);
            row++;
            col--;
        }
        ans.push_back(req);
    }
    //lower triangle part
    for(int i=1;i<n;i++)
    {
        int row=i,col=n-1;
        vector<int> req;
        while(row<n)
        {
            req.push_back(A[row][col]);
            row++;
            col--;
        }
      ans.push_back(req);
    }
 return ans;
}

int Solution::solve(vector<vector<int> > &A, int B) {
    int row = A.size();
    int col = A[0].size();
    int maxsum = INT_MIN;
    int dp[row+1][col+1];
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            dp[i][j]=A[i-1][j-1] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
        }
    }
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            int sum = INT_MIN;
            if((i-B>=0) && (j-B>=0))
            {
                sum = dp[i][j]- dp[i-B][j]-dp[i][j-B] + dp[i-B][j-B];
                maxsum = max(sum,maxsum);
            }
        }
    }
  return maxsum;
}

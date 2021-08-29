vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    int maxele = A[n-1];
    vector<int> result;
    result.push_back(maxele);
    for(int i=n-2;i>=0;i--)
    {
        if(A[i]>maxele)
        {
            maxele = A[i];
            result.push_back(maxele);
        }
    }
 return result;
}

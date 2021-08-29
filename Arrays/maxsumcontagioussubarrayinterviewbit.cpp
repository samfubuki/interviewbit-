int Solution::maxSubArray(const vector<int> &A) {
    int sum=0;
    int maxsum = INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        sum = sum+A[i];
        maxsum = max(sum,maxsum);
        if(sum<0)
        {
            sum=0;
        }
    }
    return maxsum;
}

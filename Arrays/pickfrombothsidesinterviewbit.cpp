int Solution::solve(vector<int> &A, int B) {
    int sum1=0,sum2=0,min1;
    for(int i=0;i<A.size();i++)
    {
        sum1 = sum1 + A[i];
    }
    int i=0,j=A.size()-B-1;
    for(int k=i;k<=j;k++)
    {
        sum2 = sum2 + A[k];
    }
    min1 = sum2;
    i++;
    j++;
    while(j<A.size())
    {
        sum2 = sum2 + (A[j]-A[i-1]);
        min1 = min(sum2,min1);
        i++;
        j++;
    }
    return (sum1-min1);
}

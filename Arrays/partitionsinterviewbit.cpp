int Solution::solve(int A, vector<int> &B) {
    int sum=0;
    for(int i=0;i<A;i++)
    {
        sum = sum + B[i];
    }
    if(sum%3!=0)
    {
        return 0;
    }
    else
    {
        int onethird = sum/3;
        vector<int> temp(A,0);
        int tempsum = 0;
        for(int i=A-1;i>=0;i--)
        {
            tempsum = tempsum + B[i];
            if(tempsum==onethird)
            {
                temp[i]=1;
            }

        }
        int tempsum2=0;
        int totalcnt=0;
        for(int i=0;i<A;i++)
        {
            tempsum2 = tempsum2 + B[i];
            if(tempsum2 == onethird)
            {
                for(int j=i+2;j<A;j++)
                {
                    if(temp[j]==1)
                    {
                        totalcnt++;
                    }
                }
            }
        }
     return totalcnt;
    }
}

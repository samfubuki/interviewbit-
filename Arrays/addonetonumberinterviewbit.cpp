vector<int> Solution::plusOne(vector<int> &A) {
    int cnt=0;
    int n = A.size();
    for(int i=0;i<n;i++)
    {
        if(A[i]==9)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    if(cnt==n)
    {
        vector<int> ans;
        ans.push_back(1);
        for(int i=0;i<n;i++)
        {
            ans.push_back(0);
        }
     return ans;
    }
    else if(A[n-1]==9)
    {
        int carry=1;
        for(int i=n-1;i>=0 && carry==1;i--)
        {
            if(A[i]==9)
            {
                A[i]=0;
            }
            else
            {
                A[i]++;
                carry=0;
            }
        }
    }
    else
    {
        A[n-1]++;
    }
        reverse(A.begin(),A.end());
        for(int i=n-1;i>=0 && A[i]==0;i--)
        {
            A.pop_back();
        }
        reverse(A.begin(),A.end());
        return A;

}

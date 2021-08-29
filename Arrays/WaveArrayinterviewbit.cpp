vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    int i;
    vector<int> odd,even,result;
    for(int i=0;i<A.size();i++)
    {
        if(i%2==0)
        {
            odd.push_back(A[i]);
        }
        else
        {
            even.push_back(A[i]);
        }
    }
    if(odd.size()==even.size())
    {
        for(int i=0;i<even.size();i++)
        {
            result.push_back(even[i]);
            result.push_back(odd[i]);
        }
    }
    else if(odd.size()>even.size())
    {
        for(int i=0;i<even.size();i++)
        {
            result.push_back(even[i]);
            result.push_back(odd[i]);
        }
      result.push_back(odd[odd.size()-1]);
    }
 return result;
}

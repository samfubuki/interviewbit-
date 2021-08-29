vector<int> Solution::findPerm(const string str, int B) {
    vector<int> ans;
    int start=1,end=0;
    int n = str.length();
    for(int i=0;i<n;i++)
    {
        end++;
        if(str[i]=='I')
        {
            for(int j=end;j>=start;j--)
            {
                ans.push_back(j);
            }
          start = end+1;
        }
    }
    end++;
    for(int j=end;j>=start;j--)
    {
        ans.push_back(j);
    }
 return ans;
}

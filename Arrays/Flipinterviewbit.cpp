vector<int> Solution::flip(string A) {
  int i=0,maxcnt = INT_MIN , l =0 , r,cnt=0, ltemp=0,c=0;
  vector<int> ans;
  for(int i=0;i<A.length();i++)
  {
      if(A[i]=='0')
      {
          c++;
      }
  }
  if(c==0)
  {
      return ans;
  }
  while(i<A.length())
  {
      if(A[i]=='0')
      {
          cnt++;
      }
      else
      {
          cnt--;
      }
      if(cnt>maxcnt)
      {
          maxcnt = cnt;
          l=ltemp;
          r=i;
      }
      if(cnt<0)
      {
          cnt=0;
          ltemp = i+1;
      }
    i++;
  }
  ans.push_back(l+1);
  ans.push_back(r+1);
  return ans;
  }

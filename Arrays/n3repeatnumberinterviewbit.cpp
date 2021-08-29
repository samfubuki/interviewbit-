int n = nums.size();
      int num1 = -1, num2= -1, cnt1=0, cnt2=0, i;
      for( i=0;i<n;i++)
      {
          if(nums[i]==num1)
          {
              cnt1++;
          }
          else if(nums[i]==num2)
          {
              cnt2++;
          }
          else if(cnt1==0)
          {
              num1=nums[i];
              cnt1=1;
          }
          else if(cnt2==0)
          {
              num2 = nums[i];
              cnt2=1;
          }
          else
          {
              cnt1--;
              cnt2--;
          }
      }
      int ans;
      cnt1=0,cnt2=0;
      for( i=0;i<n;i++)
      {
          if(nums[i]==num1)
          {
              cnt1++;
          }
          else if(nums[i]==num2)
          {
              cnt2++;
          }
      }
      if(cnt1>n/3)
      {
          ans = num1;
      }
      else if(cnt2>n/3)
      {
          ans = num2;
      }
      else
      {
          ans = -1;
      }
      return ans;

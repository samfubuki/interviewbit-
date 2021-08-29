bool comparator(pair<int,char> one, pair<int,char> two)
{
    if(one.first==two.first)
    {
        return one.second>two.second;
    }
 return one.first<two.first;
}
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int,char> > ans;
    int n = arrive.size();
    for(int i=0;i<n;i++)
    {
        ans.push_back(make_pair(arrive[i],'a'));
        ans.push_back(make_pair(depart[i],'d'));
    }
    sort(ans.begin(),ans.end(),comparator);
    int currroom=0,roommax=0;
    for(int i=0;i<2*n;i++)
    {
        if(ans[i].second=='a')
        {
            currroom++;
            roommax=max(roommax,currroom);
        }
        else
        {
            currroom--;
        }
    }
 return K>=roommax;
}

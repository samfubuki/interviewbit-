/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool comparator(Interval a, Interval b)
{
    return a.start<b.start;
}
vector<Interval> Solution::merge(vector<Interval> &v) {
   sort(v.begin(),v.end(),comparator);
   int n = v.size();
   vector<Interval> ans;
   for(int i=0;i<n-1;i++)
   {
       if(v[i].end>=v[i+1].start)
       {
           v[i+1].start = min(v[i].start,v[i+1].start);
           v[i+1].end = max(v[i].end,v[i+1].end);
       }
       else
       {
           ans.push_back(v[i]);
       }
   }
   ans.push_back(v[n-1]);
   return ans;

}

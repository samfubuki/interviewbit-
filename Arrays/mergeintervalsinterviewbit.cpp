/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &v, Interval i) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details}
    vector<Interval> ans;
    int n = v.size();
    int start = i.start, end = i.end;
    bool check = false;
    for(int i=0;i<n;i++)
    {
        if(v[i].end<start)
        {
            ans.push_back(v[i]);
        }
        else if(v[i].start>end)
        {
            if(!check)
            {
                ans.push_back({start,end});
            }
            ans.push_back(v[i]);
            check=true;
        }
        else
        {
            start = min(start,v[i].start);
            end = max(end,v[i].end);
        }
    }
    if(!check)
    {
        ans.push_back({start,end});
    }
 return ans;

}

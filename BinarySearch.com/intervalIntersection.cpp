// https://binarysearch.com/problems/Interval-Intersection

vector<int> solve(vector<vector<int>>& intervals) {
    vector<int> v;
    int n2 = INT_MAX, n1 = INT_MIN;
    for(int i = 0; i < intervals.size(); i++)
    {
        n1=max(n1,intervals[i][0]);
        n2=min(n2,intervals[i][1]);
    }
    v.push_back(n1);
    v.push_back(n2);
    return v;
}

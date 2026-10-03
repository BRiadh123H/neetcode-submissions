/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:

    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
    return a.start < b.start;
});
        for (int i=0;i<intervals.size();i++)
        {
            cout <<intervals[i].start<<" "<<intervals[i].end<<endl;
            for (int j=i;j<intervals.size();j++)
            {
                if (i==j)
                    continue;
                else
                {
                    if (intervals[i].end>intervals[j].start)
                        return false;
                }
            }
        }
        return true;
    }
};

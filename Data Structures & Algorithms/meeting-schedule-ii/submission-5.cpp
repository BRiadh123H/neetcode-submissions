class Solution {
public:
    int minMeetingRooms(std::vector<Interval>& intervals) {
        if (intervals.empty()) return 0;

        std::sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
            return a.start < b.start;
        });

        std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

        for (const auto& meeting : intervals) {

            if (!pq.empty() && meeting.start >= pq.top()) {
                pq.pop();
            }
            pq.push(meeting.end);
        }
        return pq.size();
    }
};

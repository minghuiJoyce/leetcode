/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        //sort start and end array
        //scan through start array, set a pointer to the end array
        //if current start < curr end, room++; else, end pointer ++
        int len = intervals.size();
        vector<int> start;
        vector<int> end;
        for(int i = 0; i<len;i++){
            start.push_back(intervals[i].start);
            end.push_back(intervals[i].end);            
        }
        std::sort(start.begin(), start.end());
        std::sort(end.begin(),end.end());
        int room =0;
        int endp = 0;
        for(int i = 0;i<len;i++){
            if(start[i]<end[endp]){
                room++;
            }
            else{
                endp++;
            }
        }
        return room;
    
    }
};

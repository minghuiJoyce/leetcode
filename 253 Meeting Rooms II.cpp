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
/*
解法2：minHeap
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
    static bool compareI(const Interval& a, const Interval& b){
        return a.start<b.start;
    }
    
    int minMeetingRooms(vector<Interval>& intervals) {        
        //method 2: usig priority_queue: minHeap
        //compare condition: sort intervals by starting time,
        //see if the lastest end time is smaller than current starting time; if smaller, then a room can now be used for another interview
        sort(intervals.begin(), intervals.end(), compareI);
        priority_queue<int,vector<int>, greater<int> > queue;
        int room = 0;
        int sizeI = intervals.size();
        for(int i = 0; i< sizeI;i++){
            queue.push(intervals[i].end);
        }
        for(int i = 0;i<sizeI;i++){
            if(intervals[i].start<queue.top()){
                room++;
            }
            else{
                queue.pop();
            }
        }
        return room;
        
    }
};
*/

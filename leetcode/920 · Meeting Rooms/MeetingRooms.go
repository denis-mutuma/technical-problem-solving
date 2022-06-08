/**
 * Definition of Interval:
 * type Interval struct {
 *     Start, End int
 * }
 */

/**
 * @param intervals: an array of meeting time intervals
 * @return: if a person could attend all meetings
 */

import "sort"

func CanAttendMeetings(intervals []*Interval) bool {
	// Write your code here

	sort.Slice(intervals, func(i, j int) bool {
		return intervals[i].Start < intervals[j].Start
	})

	if len(intervals) <= 1 {
		return true
	}

	for i := 0; i < len(intervals)-1; i++ {
		if intervals[i].End > intervals[i+1].Start {
			return false
		}
	}
	return true
}
 
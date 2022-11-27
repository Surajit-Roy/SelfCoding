#include<bits/stdc++.h>
using namespace std;

// Method - 1
int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> a;
    for(int i=0; i<n; i++){
    int x, y;
    cin>>x>>y;
    a.push_back({x,y});
    }
    sort(a.begin(), a.end());
    stack<pair<int, int>> s;
    s.push({a[0].first, a[0].second});
    for(int i=1; i<n; i++){
        int start1 = s.top().first;
        int end1 = s.top().second;
        int start2 = a[i].first;
        int end2 = a[i].second;
        if(end1 < start2){
            s.push({start2, end2});
        }
        else{
            s.pop();
            end1 = max(end1, end2);
            s.push({start1, end1});
        }
    }
    while(!s.empty()){
        cout << s.top().first << " " << s.top().second << endl;
        s.pop();
    }
    return 0;
}

// Method - 1 --
// Time Complexity-- O(NlogN)
// Space Complexity--O(N)



// Method -2
// struct Interval {
//     int start, end;
// };
 
// // Compares two intervals according to their starting time.
// // This is needed for sorting the intervals using library
// // function std::sort(). See http://goo.gl/iGspV
// bool compareInterval(Interval i1, Interval i2)
// {
//     return (i1.start < i2.start);
// }
 
// // The main function that takes a set of intervals, merges
// // overlapping intervals and prints the result
// void mergeIntervals(Interval arr[], int n)
// {
//     // Test if the given set has at least one interval
//     if (n <= 0)
//         return;
 
//     // Create an empty stack of intervals
//     stack<Interval> s;
 
//     // sort the intervals in increasing order of start time
//     sort(arr, arr + n, compareInterval);
 
//     // push the first interval to stack
//     s.push(arr[0]);
 
//     // Start from the next interval and merge if necessary
//     for (int i = 1; i < n; i++) {
//         // get interval from stack top
//         Interval top = s.top();
 
//         // if current interval is not overlapping with stack
//         // top, push it to the stack
//         if (top.end < arr[i].start)
//             s.push(arr[i]);
 
//         // Otherwise update the ending time of top if ending
//         // of current interval is more
//         else if (top.end < arr[i].end) {
//             top.end = arr[i].end;
//             s.pop();
//             s.push(top);
//         }
//     }
 
//     // Print contents of stack
//     cout << "\n The Merged Intervals are: ";
//     while (!s.empty()) {
//         Interval t = s.top();
//         cout << "[" << t.start << "," << t.end << "] ";
//         s.pop();
//     }
//     return;
// }
 
// // Driver program
// int main()
// {
//     Interval arr[]
//         = { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     mergeIntervals(arr, n);
//     return 0;
// }

// Method - 2 --
// Time Complexity-- O(NlogN)
// Space Complexity--O(1)
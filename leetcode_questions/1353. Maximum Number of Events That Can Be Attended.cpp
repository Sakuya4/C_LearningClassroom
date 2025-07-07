class Solution {
    public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        int result=0;
        int eventPointer=0;
        int n=events.size();
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int day=1;day<=100000;day++)
        {
        while(eventPointer<events.size()&&events[eventPointer][0]<=day)
        {
          pq.push(events[eventPointer][1]);
          eventPointer++;
        }
            while(!pq.empty()&&pq.top()<day) pq.pop();
            if(!pq.empty())
            {
              pq.pop();
              result++;
            }
            if(pq.empty()&&eventPointer>=n) break;
        }
    return result;
     }
  };

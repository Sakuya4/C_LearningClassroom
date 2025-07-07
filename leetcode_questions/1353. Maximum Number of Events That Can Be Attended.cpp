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
/* 
想像解決作業
首先解決EndDay最早的那個Event 

看StartDay可以知道手頭上有哪些Event 
經過某一天，解鎖哪些活動，解鎖的活動中，EndDay最早的活動，解決它

每次都找EndDay最早的Event，但還是有一些Event沒辦法參加 //其為極限

Sort(startDay)
PriorityQueue(endDay)



*/

/*
pseudo code
int maxEvents(int** events, int eventsSize, int* eventsColSize) {
  sort(events的begin, events的end); // 排序活動，讓最開始的Event在最前面
  int eventPointer=0; //指針，哪些跟這個day有關的Event
  priority_queue<int> pq; // 用來存EndDay
  for(int day=1;day<=100000;day++) // 掃過整個日曆的概念
  {
    while(eventPointer<eventsSize && events[eventPointer][0]==day) // 沒越界，且這個Event的StartDay是今天(or <=)
    {
      pq.push(events[eventPointer][1]); // 把這個Event的EndDay放進PriorityQueue
      eventPointer++;
    }
    while(!pq.empty() && pq.top()<day) // 如果PriorityQueue的Top的EndDay小於今天，表示這個Event已經結束了，pop掉
    {
      pq.pop();
    }
    if(!pq.empty()){
      pq.pop();
      result++;
    }
    如果pq是空和pq.top()<day，則pop掉 代表已經超過這個Event的EndDay
  }
  return result;
}




*/

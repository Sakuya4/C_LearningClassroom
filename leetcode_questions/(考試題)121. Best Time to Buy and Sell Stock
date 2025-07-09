int maxProfit(int* prices, int pricesSize) {
    int maxProfit=0;
    int minPrice=prices[0];
    if(pricesSize==0) return 0;
    for(int i=0;i<pricesSize;i++)
    {
      minPrice=fmin(minPrice,prices[i]);
      maxProfit=fmax(maxProfit,prices[i]-minPrice);
    }
    return maxProfit;
}


/* 
class Solution(object):
    def maxProfit(self, prices):
        maxProfit=0
        minPrice=prices[0]
        if not prices:
            return 0
        for i in prices:
            minPrice=min(minPrice,i)
            maxProfit=max(maxProfit,i-minPrice)
        return maxProfit        
*/

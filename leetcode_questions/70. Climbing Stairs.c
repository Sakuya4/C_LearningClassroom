int climbStairs(int n) {
  int one=1;
  int two=2;
  if(n<=2) return n;
  for(int i=3;i<=n;i++)
  {
    int current=one+two;
    one=two;
    two=current;
  }
  return two;
}



// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps


// Input: n = 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step

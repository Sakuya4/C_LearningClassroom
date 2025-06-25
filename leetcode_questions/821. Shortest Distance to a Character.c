/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shortestToChar(char* s, char c, int* returnSize) {
  int len=strlen(s);
  int prev=-len;
  int *ans=(int*)malloc(len*sizeof(int)); // 指標，方便去做位置加減
  for(int i=0;i<len;i++)
  {
    if(s[i]==c) prev=i;
    ans[i]=i-prev;
  }
  prev=len*2; //初始給他從屁股過來
  for(int i=len-1;i>=0;i--)
  {
    if(s[i]==c) prev=i;
    if(prev-i<ans[i]) ans[i]=prev-i;
  }
  *returnSize=len;
  return ans;
}


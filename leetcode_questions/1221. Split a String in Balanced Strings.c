int balancedStringSplit(char* s) {
  int splitAnswer = 0;
  int balance=0; // 相加不能差1

  for(int i=0;s[i]!='\0';i++)
  {
    if(s[i]=='R') balance++;
    else if(s[i]=='L') balance--;
    else continue;

    if(balance==0) // greedy, 只要平衡了就加一個
    {
      splitAnswer++;
      balance=0;
    }
  }
  return splitAnswer;    
}




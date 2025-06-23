int numJewelsInStones(char* jewels, char* stones) {
    int table[256]={0};
    int count=0;
    for(int i=0;jewels[i]!='\0';i++)
    {
      table[(unsigned char)jewels[i]]=1;    
    }
    for(int i=0;stones[i]!='\0';i++)
    {
      if(table[(unsigned char)stones[i]]==1) count++;
    }
  return count;
}

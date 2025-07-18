int searchTable(char c) {
  switch(c)
  {
  case 'I':return 1;
  case 'V':return 5;
  case 'X':return 10;
  case 'L':return 50;
  case 'C':return 100;
  case 'D':return 500;
  case 'M':return 1000;
  default:return 0;
  }


}

int romanToInt(char *s)
{
  int len=strlen(s);
  int result=0;
  for(int i=0;i<len;i++)
  {
    int current=searchTable(s[i]);
    int next=searchTable(s[i+1]);
    if(next>current) result-=current;
    else result+=current;
  }
  return result;
}

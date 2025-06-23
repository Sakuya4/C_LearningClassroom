// balloon
int maxNumberOfBalloons(char* text) {
 int table[256]={0};
 int count = 0;
 for(int i=0;text[i]!='\0';i++)
 {
  if(text[i]=='b'||text[i]=='a'||text[i]=='l'||text[i]=='o'||text[i]=='n')
  {
    table[text[i]]++;
  }
 }
 if(table['b']==0||table['a']==0||table['l']==0||table['o']==0||table['n']==0) return 0;
 while(table['b']>=1&&table['a']>=1&&table['l']>=2&&table['o']>=2&&table['n']>=1)
 {
    count++;
    table['b']-=1;
    table['a']-=1;
    table['l']-=2;
    table['o']-=2;
    table['n']-=1;
 }
 return count;
 
}

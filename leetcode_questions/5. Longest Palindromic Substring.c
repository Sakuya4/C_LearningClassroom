char* longestPalindrome(char* s) {
    int m, n = 0; // pointer for left and right
    int answer = 0; // record the length of the longest palindrome
    int len = strlen(s);
    int start = 0; 
    int maxLen = 1;

    if(s==NULL||s[0]=='\0') return s;
    
    for(int i=0;i<len;i++)
    {
      int left=i, right=i; // odd length palindrome
      while(left>=0 && right<len && s[left]==s[right])
      {
        if(right-left+1>maxLen)
        {
          start=left;
          maxLen=right-left+1;  
        }
        left--;
        right++;
      }
      left=i, right=i+1; // even length palindrome
      while(left>=0 && right<len && s[left] == s[right])
      {
        if(right-left+1>maxLen)
        {
          start=left;
          maxLen=right-left+1;  
        }
        left--;
        right++;
      }
    }
    char* result = (char*)malloc(sizeof(char)*(maxLen+1));
    strncpy(result, s+start, maxLen);
    result[maxLen] = '\0';
    return result;
}

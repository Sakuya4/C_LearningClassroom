int searchInsert(int* nums, int numsSize, int target) {
  int left=0;
  int right = numsSize-1;
  int middle=0;
  while(left<=right)
  {
    middle=(left+right)/2;
    if(nums[middle]==target) return middle;
    if(nums[middle]<target) left=middle+1;
    if(nums[middle]>target) right=middle-1;
  }
  return left;
}

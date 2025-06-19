int findkthElement(int *nums1, int a, int m, int *nums2, int b, int n, int k);
int min(int a, int b);

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    int m = nums1Size;
    int n = nums2Size;
    int total = m+n;
    if(total%2==1) return findkthElement(nums1,0,m,nums2,0,n,total/2+1);
    else 
       return (findkthElement(nums1,0,m,nums2,0,n, total/2) + findkthElement(nums1,0,m,nums2,0,n, total/2+1))*0.5;
}

int min(int a, int b)
{
    if(a<b) return a;
    else return b;
}


int findkthElement(int *nums1, int a, int m ,int *nums2, int b, int n, int k) // nums1, nums2 find k/2
{   
    if(m-a>n-b) return findkthElement(nums2, b, n, nums1, a, m, k); // check if nums1 is longer
    // range limit
    if(a==m) return nums2[b+k-1];
    if(k == 1) return min(nums1[a], nums2[b]);
    int k1 = (m-a)<(k/2) ? (m-a):(k/2);
    int k2 = k-k1;
    if(nums1[a+k1-1]<nums2[b+k2-1]) return findkthElement(nums1, a+k1, m, nums2, b, n, k-k1);
    else return findkthElement(nums1, a, m, nums2, b+k2, n, k-k2);
}

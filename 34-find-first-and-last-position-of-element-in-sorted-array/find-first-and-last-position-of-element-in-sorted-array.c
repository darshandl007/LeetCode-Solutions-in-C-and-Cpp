/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {

    int *arr=malloc(2*sizeof(int));
    arr[0]=-1;
    arr[1]=-1;
    int left=0;
    int right=numsSize-1;
    int size=0;
    int first=-1;
    int second=-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
         
        if(nums[mid]==target)
        {
           
             first=mid;
            right=mid-1;
          
        }
       
       else if(nums[mid]<target)
        {
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
     left = 0;
            right = numsSize - 1;
    while(left<=right)
    {
            int mid=left+(right-left)/2;
         
        
       
        if(nums[mid]==target)
        {
 
            second=mid;
            left=mid+1;
            
        }else if(nums[mid]<target)
        {
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    arr[0]=first;;
    arr[1]=second;
    *returnSize=2;
    return arr;
}
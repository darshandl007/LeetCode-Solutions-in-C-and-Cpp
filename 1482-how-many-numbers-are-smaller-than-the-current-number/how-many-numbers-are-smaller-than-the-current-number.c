/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int *arr = malloc(numsSize*sizeof(int));
    int count=0;
    for(int i=0;i<numsSize;i++)
    {
       for(int j=0;j<numsSize;j++)
       {
        if(nums[j] < nums[i])
        {
            count++;
        }
       }
       arr[i] = count;
       count=0;
    }
    *returnSize=numsSize;
    return arr;
    
}
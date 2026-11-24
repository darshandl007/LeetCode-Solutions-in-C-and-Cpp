/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *prefix=malloc(numsSize*sizeof(int));
   
    prefix[0]=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        prefix[i]=prefix[i-1]+nums[i];
    }
    *returnSize=numsSize;
    return prefix;
    
}
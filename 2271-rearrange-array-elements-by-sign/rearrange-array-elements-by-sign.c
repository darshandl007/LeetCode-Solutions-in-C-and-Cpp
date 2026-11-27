/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    
    int *arr=malloc(numsSize*sizeof(int));
    int size1=0;
    int temp[numsSize];
    int size2=0;
    int temp2[numsSize];

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<0)
        {
            temp[size1++]=nums[i];   
        }else{
            temp2[size2++]=nums[i];
        }
    }
    
    int k=0;
    
    for(int i=0;i<numsSize/2;i++)
    {
        arr[k++]=temp2[i];
        arr[k++]=temp[i];
    }
    * returnSize=numsSize;
    return arr;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {

    int*arr=malloc(numsSize*sizeof(int));
    int size=0;
    int hash[numsSize+1];
    for(int i=0;i<numsSize+1;i++)
    {
        hash[i]=0;
    }
    for(int i=0;i<numsSize;i++)
    {
       
        
        if(hash[nums[i]] == 1)
        {
            arr[size++]=nums[i];
        }else
        {
                hash[nums[i]]=1;
        }
        
        
    }
    *returnSize=size;
    return arr;
}
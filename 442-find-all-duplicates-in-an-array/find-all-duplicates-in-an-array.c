/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    
    int *arr=malloc(numsSize*sizeof(int));

    int hash[100001]={0};
    int size=0;
    for(int i=0;i< numsSize;i++)
    {
        hash[nums[i]]++;
    }
    for(int i=0;i<100000;i++)
    {
        if(hash[i] > 1)
        {
            arr[size++]=i;
        }
    }
    *returnSize=size;
    return arr;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
int *arr=malloc(2*sizeof(int));
*returnSize=2;

int left=0;
int right=numbersSize-1;


while(left<right)
{
    int sum=numbers[left]+numbers[right];
    if(sum==target)
    {
        arr[0]=left+1;
        arr[1]=right+1;
        return arr;
    }
    if(sum > target)
    {
        right--;
    }else{
        left++;
    }
}
return arr;
    
}
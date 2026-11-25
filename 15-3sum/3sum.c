/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {

    *returnSize=0;
    int capacity = 16;
    if(numsSize<3)
    {
        *returnColumnSizes =NULL;
        return NULL;
    }
  
    int **arr=malloc(capacity *sizeof(int*));
    
    *returnColumnSizes=malloc(capacity*sizeof(int));
    
  
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=0;j<numsSize-i-1;j++)
        {
            if(nums[j] > nums[j+1])
            {
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    
    int r=0;
   for(int i=0;i<numsSize-2;i++)
   {
        if(i > 0 && nums[i] == nums[i-1])
    {
        continue;
    }
        int left=i+1;
        int right=numsSize-1;
        
        while(left<right)
        {

            int sum=nums[i]+nums[left]+nums[right];

            if(sum==0)
            {if(r == capacity)
{
    capacity *= 2;

    arr = realloc(arr, capacity * sizeof(int*));

    *returnColumnSizes = realloc(
        *returnColumnSizes,
        capacity * sizeof(int)
    );
}
               arr[r]=malloc(3*sizeof(int));
                arr[r][0] = nums[i];
                arr[r][1] = nums[left];
                arr[r][2] = nums[right];
                 (*returnColumnSizes)[r]=3;
                r++;
                left++;
                right--;
                while(left < right && nums[left] == nums[left-1])
                    left++;

                while(left < right && nums[right] == nums[right+1])
                    right--;
            }
            else if(sum >0)
            {
                right--;
            }
           else
            {
                left++;
            }
            
        }
   }
   *returnSize = r;
   
   
    return arr;
}
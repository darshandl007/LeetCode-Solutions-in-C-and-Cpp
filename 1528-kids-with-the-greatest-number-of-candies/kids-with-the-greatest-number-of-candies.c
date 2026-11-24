/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {

    bool *arr= malloc(candiesSize*sizeof(bool));
    int max=INT_MIN;
    for(int i=0;i<candiesSize;i++)
    {
        if(candies[i] > max)
        {
            max=candies[i];
        }
    }
   // printf("%d",max);
    int size=0;
    int sum=0;
    for(int i=0;i<candiesSize;i++)
    { 
     
        sum=candies[i] + extraCandies;
        if(sum >= max)
        {
            arr[size++]=true;
        }else{
            arr[size++]=false;
        }
           sum=0;
    }
    *returnSize=size;
    return arr;
}
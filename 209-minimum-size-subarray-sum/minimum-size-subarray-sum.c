int minSubArrayLen(int target, int* nums, int numsSize) {


    int left=0;
    int minlength=INT_MAX;
    int sum=0;

    for(int right=0;right<numsSize;right++)
    {
        sum=sum+nums[right];

        while(sum >= target)
        {
            int length= right-left+1;
            if(length < minlength)
            {
                minlength=length;
            }

            sum=sum-nums[left];
            left++;
        }
    }
     if(minlength == INT_MAX)
        return 0;
    return minlength;
}
int maxSubArray(int* nums, int numsSize) {
    int left=0;
    int max=INT_MIN;
    int sum=0;
    int maxi(int high,int low)
    {
        return high > low ? high : low; 
    }
    
    for(int i=0;i<numsSize;i++)
    {
         sum=maxi(nums[i],sum+nums[i]);
       if( sum > max)
       {
         max=sum;
       }
    }
    return max;
       
}
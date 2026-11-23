class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int size=nums.size();
        int left=0;
        int minlength=INT_MAX;
        int sum=0;

        for(int right = 0; right< size;right++)
        {
           sum=sum+nums[right];
            while(sum >= target)
            {
                 int length = right - left + 1;
                 if(length < minlength)
                minlength=length;
                 sum=sum-nums[left];
                left++;
            }
        }
        if(minlength == INT_MAX)
        {
            return 0;
        }
        return minlength;
        
    }
};
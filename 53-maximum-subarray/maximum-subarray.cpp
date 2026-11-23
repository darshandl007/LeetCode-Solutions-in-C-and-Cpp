 int maxi(int h,int l)
        {
            return h > l ? h:l;
        }
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        

        int max=INT_MIN;
        int large=0;
       

        for(int i=0;i<nums.size();i++)
        {
            large=maxi(nums[i],large+nums[i]);

            if(large>max)
            {
                max=large;
            }
            
            
        }
        return max;
    }
};
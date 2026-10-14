class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       int size=nums.size();
       vector<int> arr(size, 0);
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j] < nums[i])
                {
                    count++;
                }
            }
            arr[i] = count;
            count=0;
        }
        //*returnSize=numsSize;
        return arr;
    }
};
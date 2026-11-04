class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        int numsSize = nums.size();
        vector<int>arr;

    vector<int> hash(numsSize + 1, 0);
   
    for(int i=0;i<numsSize;i++)
    {
       
        
        if(hash[nums[i]] == 1)
        {
            arr.push_back(nums[i]);

        }else
        {
                hash[nums[i]]=1;
        }
        
        
    }
  
    return arr;
        
    }
};
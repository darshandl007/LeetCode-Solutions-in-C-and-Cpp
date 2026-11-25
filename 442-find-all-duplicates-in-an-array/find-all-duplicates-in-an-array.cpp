class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         vector<int> arr;

         int hash[100001]={0};

         for(int i=0;i<nums.size();i++)\
         {
            hash[nums[i]]++;
         }

         int size=0;
         for(int i=0;i<100001;i++)
         {
            if(hash[i] > 1)
            {
                arr.push_back(i);
            }
         }
        return arr;
    }
};
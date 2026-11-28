class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> arr(2,0);
        int left=0;
        int right=numbers.size()-1;

        while(left<right)
        {
            int sum=numbers[left]+numbers[right];

            if(sum==target)
            {
                arr[0]=left+1;
                arr[1]=right+1;
               // return arr;
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
   
};
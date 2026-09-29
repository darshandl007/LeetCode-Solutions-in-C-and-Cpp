void reverse(vector<int>& nums,int left,int right)
{
    while(left<right)
    {
        int temp=nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;
    }
}


class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int size=nums.size();
         k=k % size;

        reverse(nums,0,size-1);
        
        reverse(nums,0,k-1);

        reverse(nums,k,size-1);
    }
};
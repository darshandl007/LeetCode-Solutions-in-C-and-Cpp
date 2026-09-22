
class Solution {
public:
    int maxArea(vector<int>& height) {

        int max=0;
        int left=0;
        int right = height.size()-1;
        int area = 0;
        while(left < right)
        {
             area= std::min(height[left],height[right]) *(right-left);

            if(area > max)
            {
                max = area;
            }
            if(height[left] < height[right])
            {
                left++;
            }else
            {
                right--;
            }
        }
        
        return max;
    }
};
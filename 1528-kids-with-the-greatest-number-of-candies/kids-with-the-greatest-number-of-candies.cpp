class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> arr(candies.size(),0);
        int max=INT_MIN;
        int sum=0;
        
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i] > max)
            {
                max=candies[i];
            }
        }
        int size=0;
        for(int i=0;i<candies.size();i++)
        {
            sum=candies[i]+extraCandies;
            if(sum >= max)
            {
                arr[size++]=true;
            }else{
                arr[size++]=false;
            }
            sum=0;
        }
        return arr;
    }
    
};
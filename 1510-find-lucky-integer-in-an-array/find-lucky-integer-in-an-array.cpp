class Solution {
public:
    int findLucky(vector<int>& arr) {

        int prev =0;
        int flag=0;
        for(int i=0;i<arr.size();i++)
        {
            int count=0;
            for(int j=0;j<arr.size();j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }
            } 
            if(count == arr[i])
            {
                if( arr[i] > prev)
                {
                    prev = arr[i];
                    flag=1;
                }
            }
        }
        if(flag == 1)
        {
            return prev;
        }else 
        {
            return -1;
        }
        
    }
};
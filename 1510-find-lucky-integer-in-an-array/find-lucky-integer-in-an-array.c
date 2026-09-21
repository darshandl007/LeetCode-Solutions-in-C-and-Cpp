int findLucky(int* arr, int arrSize) {


    int count =0;
    int prev=0;
    int flag=0;

    for(int i=0;i<arrSize;i++)
    { 
        count = 0;
        for(int j=0;j<arrSize;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(arr[i] == count)
        {
        if(arr[i] > prev)
        {
            prev = arr[i];
            flag = 1;
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
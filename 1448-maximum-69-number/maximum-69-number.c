int maximum69Number (int num) {

    int flag=0;
    int val=0;
    while(num > 0)
    {
        int rem=num%10;
        val=10*val+rem;
        num=num/10;
    }
    int out=0;
    while(val > 0)
    {
        int rem=val%10;
        if(flag==0)
        {
            if(rem<9)
        {
            rem=9;
        
        flag=1;
        }
        }
        out=10*out+rem;
        val=val/10;
    }
    return out;
    
}
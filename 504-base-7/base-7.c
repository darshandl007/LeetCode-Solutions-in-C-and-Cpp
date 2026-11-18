char* convertToBase7(int num) {
    char *str = malloc(50*sizeof(char));
    int i=0;
    int start=0;
    if(num<0)
    {
        str[i++] = '-';
        num = -num;
         start=1;
     }
   else if(num ==0)
    {
        str[i++] = '0';
    }
    while(num>0)
    {
        int out=num%7;
        str[i++]=out + '0';
        num=num/7;
    }
     str[i] = '\0';

     
     int end=i-1;
     while(start <=end)
     {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
     }
    return str;
}
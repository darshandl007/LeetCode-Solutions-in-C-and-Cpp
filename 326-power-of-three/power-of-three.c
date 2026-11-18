bool isPowerOfThree(int n) {
    long long int i=3;
    if(n==1)
    {
        return 1;
    }
   while(i<=n)
   {
    if(i == n)
    {
        return 1;
    }
    i=i*3;
   }
    return 0;
}
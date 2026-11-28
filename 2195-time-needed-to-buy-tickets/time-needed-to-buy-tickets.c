int timeRequiredToBuy(int* tickets, int ticketsSize, int k)
{
    int count=0;
    int i=0;
    while(tickets[k] != 0)
    {
        if(tickets[k]==0)
        {
            return count;

        }else if(tickets[i] > 0)
        {
            count++;
            tickets[i]=tickets[i]-1;
            
        
        }     i=(i+1)%ticketsSize;

       
    }
    return count;
}
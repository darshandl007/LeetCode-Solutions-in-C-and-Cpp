int minOperations(char** logs, int logsSize) {

  // char stack[logsSize];

   int top=0;

   for(int i=0;i<logsSize;i++)
   {

   if(logs[i][0]=='.' && logs[i][1]=='.')
   {    
        if(top>0)
        top--;
   }else if(logs[i][0]=='.')
   {
        continue;
   }else{
        top++;
   }

   }
   return top;
}
class Solution {
public:
    int minOperations(vector<string>& logs) {

        int top=0;

   for(int i=0;i<logs.size();i++)
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
        
    
};
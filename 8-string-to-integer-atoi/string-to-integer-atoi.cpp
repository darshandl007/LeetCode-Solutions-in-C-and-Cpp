class Solution {
public:
    int myAtoi(string s) {
        int flag=1;
        int i=0;
        while(s[i] == ' ')
        {
            i++;
        }
        if(s[i] == '-' || s[i] == '+')
        {
            if(s[i]=='-')
            {
                flag=-1;
            }
            i++;
        }
        int result=0;
        int digit=0;
        while(s[i] >= '0' && s[i]<= '9')
        {
            digit=s[i]-'0';
            if(result>(INT_MAX-digit)/10)
            {
                return (flag==1) ? INT_MAX : INT_MIN;
            }
            result=result*10+digit;
            i++;
        }
        return result*flag;
    }
};

bool isValid(char* s) {
    
    int size=strlen(s);
    char stack[size];
    int top=-1;

    for(int i=0;s[i] != '\0';i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            top++;
            stack[top]=s[i];
        }
        else
        {
                if(top == -1)
                {
                    return false;
                }
                if(s[i]== ')' && stack[top]=='(')
                {
                    top--;
                }else if(s[i]== '}' && stack[top]=='{')
                {
                    top--;
                }else if(s[i]== ']' && stack[top]=='[')
                {
                    top--;
                }else{
                    return false;
                }


        }
    }
    return (top==-1);
    
}
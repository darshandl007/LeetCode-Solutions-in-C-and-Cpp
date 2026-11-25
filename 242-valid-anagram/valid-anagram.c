bool isAnagram(char* s, char* t) {
    int len1=strlen(s);
    int len2=strlen(t);
    if(len1 != len2)
    {
        return 0;
    }
    
    int hash1[27]={0};
    int hash2[27]={0};

    for(int i=0;i<len1;i++)
    {
        hash1[s[i]-'a']++;
        hash2[t[i]-'a']++;
    }
     for(int i=0;i<26;i++)
    {
        if(hash1[i] != hash2[i])
        {
            return 0;
        }
    }
    
    return 1;
    
}
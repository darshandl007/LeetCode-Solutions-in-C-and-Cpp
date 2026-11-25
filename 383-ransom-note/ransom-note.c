bool canConstruct(char* ransomNote, char* magazine) {

    int hash1[26]={0};
    int hash2[26]={0};

    for(int i=0;i<strlen(ransomNote);i++)
    {
         hash1[ransomNote[i]-'a']++;
    }

    for(int j=0;j<strlen(magazine);j++)
    {
        hash2[magazine[j]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(hash2[i] < hash1[i])
        {
            return 0;
        }
    }
    return 1;
    
}
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash1[26]={0};
    int hash2[26]={0};

    for(int i=0;i<ransomNote.size();i++)
    {
         hash1[ransomNote[i]-'a']++;
    }

    for(int j=0;j<magazine.size();j++)
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
};
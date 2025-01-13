#include<stdio.h>
#include<string.h>
int main()
{
    char string1[1000] = "";
    char string2[1000] = "";

    fgets(string1,sizeof(string1),stdin);
    fgets(string2,sizeof(string2),stdin);

    string1[strcspn(string1,"\n")] = '\0';
    string1[strcspn(string2,"\n")] = '\0';
    int map1[26]={0};
    int map2[26]={0};


    for(int i=0;i<strlen(string1);i++)
    {
        map1[string1[i]-'a']++;
    }
    for(int i=0;i<strlen(string2);i++)
    {
        map2[string2[i]-'a']++;
    }
    int flag =0;
    for(int i=0;i<26;i++)
    {
        if(map1[i]!=map2[i])
        {
            flag = 1;
            printf("Not Anagrams");
            break;
        }
    }
    if(flag==0)
    {
        printf("Anagrams");
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
void findSubstr(int lenOfString,int lenOfSubstr, char string[], char substr[])
{
    int n = lenOfString;
    int m = lenOfSubstr;
    int flag =0;
    for(int i =0;i<=n-m;i++)
    {
        
        int j;
        for(j=0;j<m;j++)
        {
            if(string[i+j]!=substr[j])
            {
                break;
            }
        }
        if(j==m)
        {
            printf("Substring Found");
            flag =1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Not Found");
    }
}
int main()
{
    char string[100]="";
    char substr[100]="";
    
    fgets(string,sizeof(string),stdin);
    fgets(substr,sizeof(substr),stdin);
    string[strcspn(string,"\n")] = '\0';
    substr[strcspn(substr,"\n")] = '\0';

    
    int lenOfString= strlen(string);
    int lenOfSubstr = strlen(substr);
    if(lenOfSubstr==0 || lenOfString==0)
    {
        printf("Substring Not Found");
        return 0;
    }
    if(lenOfString>lenOfSubstr)
        findSubstr(lenOfString,lenOfSubstr,string,substr);
    else
    {
        printf("Not Found");
    }
    return 0;
}
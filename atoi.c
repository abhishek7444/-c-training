#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000] = "";
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    int i =0;
    int num = 0;
    int sign = 0;
    int flag = 0;
    while(i<strlen(str))
    {   
        //skip Leading Spaces
        while(i<strlen(str) && str[i]==' ')
        {
            i++;
        }
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            num = 0;
            flag = 1;
            printf("%d",num);
            break;
        }
        else if(str[i]=='-')
        {
            sign = 1;
            i++;

        }
        else{
            while(i<strlen(str) && str[i]>='0' && str[i]<='9')
            {
                num = num * 10 + (str[i]-'0');
                i++;
            }
            break;
        }

    }
    if(sign ==1)
    {
        num = num * -1;
    }
    if(flag==0)
        printf("%d",num);
}
#include<stdio.h>
#include<string.h>

void checkRotation(int lenOfString1,int lenOfString2,char circularArray[], char string2[])
{
    int n = 2*lenOfString1;
    int m = lenOfString2;
    int flag =0;
    //outer loop for traversing the circular Array
    for(int i =0;i<=n-m;i++){

        int j;

        for(j=0;j<m;j++)
        {
            if(circularArray[i+j]!=string2[j])
            {
                break;
            }
        }
        if(j==m)
        {
            flag = 1;
            break;
        }
        
    }
    if(flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
}
int main()
{
    char string1[1000]="";
    char string2[1000] ="";

    fgets(string1,sizeof(string1),stdin);

    fgets(string2,sizeof(string2),stdin);

    string1[strcspn(string1,"\n")] = '\0';
    string2[strcspn(string2,"\n")] = '\0';
    int lenOfString1 = strlen(string1);
    int lenOfString2 = strlen(string2);
    
    if(lenOfString1!=lenOfString2){
        printf("No");
        return 0;
    }
    char cicularArray[2*lenOfString1];

    for(int i =0;i<lenOfString1;i++){
        cicularArray[i] = string1[i];
        cicularArray[i+lenOfString1] = string1[i];
    }
    
    cicularArray[2*lenOfString1] = '\0';
    
    
    
    checkRotation(lenOfString1,lenOfString2,cicularArray,string2);


}
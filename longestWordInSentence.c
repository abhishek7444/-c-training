#include<stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    char inputString[10000];
    fgets(inputString,sizeof(inputString),stdin);

    inputString[strcspn(inputString,"\n")] = '\0';
    int lenOfInputString = strlen(inputString);
    if(lenOfInputString==0) return 0;

    int i =0;
    int maxLen = INT_MIN;
    char maxLenWord[10000] ="";
    while (i<lenOfInputString)
    {
        int j = i+1;
        while(j<lenOfInputString && inputString[j]!=' ')
        {
            j++;
        }
        int lengthOfWord = j-i;
        if(lengthOfWord>maxLen)
        {
            maxLen = lengthOfWord;
            strncpy(maxLenWord,inputString+i,j);
            maxLenWord[maxLen]='\0';
        }
        i=j+1;

    }
    printf("%s",maxLenWord);
    


    return 0;
}
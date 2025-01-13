#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);

    int find = strcspn(str,"\n");
    str[find] = '\0';

    char* token = strtok(str," ");
    int countWords = 0;
    while(token!=NULL){
        countWords++;
        token = strtok(NULL," ");
    }

    printf("%d",countWords);

}
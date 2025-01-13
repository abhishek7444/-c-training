#include<stdio.h>
#include<string.h>
int find(char ans[100],char ch){
    for(int i=0;i<strlen(ans);i++){
        if(ch==ans[i]) return 1;
        
    }
    return 0;
}
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);

    int index = strcspn(str,"\n");
    str[index] = '\0';

    char ans[100]="";
    int j=0;
    int i =0;
    while (str[i]!='\0')
    {
        if(find(ans,str[i])!=1){
            ans[j++] = str[i++];
        }
        else{
            i++;
        }
    
    }

    ans[j] = '\0';

    printf("%s",ans);
    
    return 0;
}

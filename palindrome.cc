#include <stdio.h>
int main(){
    char s1[100];
    scanf("%[^\n]s",s1);
    int i=0;
    while(s1[i]!='\0'){
        i++;
    }
    int len=i,f=0;
    i=0;
    int last=i-1;
    while(i<len/2){
        if(s1[i]!=s1[last]){
            printf("not palindrome");
            f=1;
            break;
        }i++;last--;
    }
    if(f==0){
        printf("palindrome");
    }
    return 0;
}
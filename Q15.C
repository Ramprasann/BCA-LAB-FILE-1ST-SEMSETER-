#include<stdio.h>
int main(){
    char ch;
    printf("enter any character=");
    scanf("%d",&ch);
    if(ch>='a'&& ch<='z'){
    printf("\n %c is alphabtes of lowercase");
    }
    else if (ch>='A'&& ch<='Z')
    {
        printf("\n %c is an alphabets of uppercase");
    }
    else if(ch>='0'&& ch<='9'){
        printf("\n %c is a digit",ch);
    }
    else{
        printf("%c is a special charcater",ch);
    }
    return 0;
    
}
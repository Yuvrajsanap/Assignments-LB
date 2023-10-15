#include <stdio.h>

void DisplayConvert(int CValue){
     if(CValue>='a' && CValue<='z'){
        printf("%c",CValue-'a'+'A');
     }
   else if(CValue>='A' && CValue<='Z'){
        printf("%c",CValue-'A'+'a');
    }
    
}
int main()
{
    char cValue='\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
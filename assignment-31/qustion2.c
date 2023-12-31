#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InserFirst(PPNODE Head,int no){
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if(*Head==NULL){
        *Head=newn;
    }
    else{
        newn->next=*Head;
        *Head=newn;
    }
}

void Display(PNODE Head){
    printf("LL are:\n");

    while(Head!=NULL){
        printf("|%d|->",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}
void DisplayPalindrome(PNODE Head){
    int iDigit=0;
    int iRev=0;

    while(Head!=0){
        int iStore=Head->data;
        while((Head->data)!=0){
            iDigit=(Head->data)%10;
            iRev=(iRev*10)+iDigit;
            (Head->data)=(Head->data)/10;

        }
        if(iStore==iRev){
            printf("%d\t",iStore);
        }   
        iRev=0;   
        Head=Head->next;
    }
}
int main(){

    PNODE First=NULL;

    InserFirst(&First,89);
    InserFirst(&First,6);
    InserFirst(&First,414);
    InserFirst(&First,17);
    InserFirst(&First,28);
    InserFirst(&First,11);
    Display(First);
    DisplayPalindrome(First);
    return 0;
}
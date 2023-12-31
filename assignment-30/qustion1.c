#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
   struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int no){
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

int DisplayPerfect(PNODE Head){

    while(Head!=NULL){
    int iCnt=0;
    int no=Head->data;
    int iSum=0;
    for(iCnt=1;iCnt<=(no/2);iCnt++){
        if(no%iCnt==0){
            iSum=iSum+iCnt;
        }
    }
    if(iSum==no){
        printf("%d\t",no);
    }
    Head=Head->next;
    }
}
int main()
{

    PNODE First=NULL;

    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);
    Display(First);
    DisplayPerfect(First);
    return 0;
}
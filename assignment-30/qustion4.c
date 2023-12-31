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

int SecMaximum(PNODE Head){
    int iMax=Head->data;
    int iMaxSec=0;

    while(Head!=NULL){
        if(iMax<=(Head->data)){
            iMaxSec=iMax;
            iMax=Head->data;
        }
        else if(iMaxSec<=(Head->data)){
            iMaxSec=Head->data;
        }
        Head=Head->next;
    }
    return iMaxSec;
}
int main()
{

    int iRet=0;
    PNODE First=NULL;

    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);
    Display(First);

   iRet= SecMaximum(First);
   printf("Seconf maximum no is:%d\n",iRet);
    return 0;
}
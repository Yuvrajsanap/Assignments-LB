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
    printf("Linked list are:\n");

    while(Head!=NULL){
        printf("|%d|->",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}

int SerchLastOcc(PNODE Head,int no){
    int iPos=-1;
    int iCnt=1;
    if(Head==NULL){
        return -1;
    }
    while(Head!=NULL){
        if((Head->data)==no){
            iPos=iCnt;
        }
        Head=Head->next;
        iCnt++;
    }
    return iPos;
}
int main()
{
    PNODE First=NULL;
    int iRet=0;

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);
    Display(First);

    iRet=SerchLastOcc(First,30);
    printf("Last Occurrence: %d",iRet);
    return 0;
}
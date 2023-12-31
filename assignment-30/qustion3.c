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

int AddtionEven(PNODE Head){

    int iSum=0;
    while(Head!=NULL){
    int iNo=Head->data;

        if((iNo%2)==0){
            iSum=iSum+iNo;
        }
        Head=Head->next;
    }
    return iSum;
}
int main()
{

    PNODE First=NULL;
    int iRet=0;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
    Display(First);
    
    iRet=AddtionEven(First);
    printf("Addition of the Even element are:%d\n",iRet) ;
    return 0;
}
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
void Displaylargest(PNODE Head){
   int iDigit=0;
   while(Head!=0){
    int iLargest=0;
    while(Head->data!=0){
        iDigit=(Head->data)%10;
        if(iLargest<iDigit){
            iLargest=iDigit;
        }
        (Head->data)=(Head->data)/10;
    }
    printf("%d\t",iLargest);
    iDigit=0;
    iLargest=0;
    Head=Head->next;
   }
}
int main(){

    PNODE First=NULL;

    InserFirst(&First,419);
    InserFirst(&First,532);
    InserFirst(&First,250);
    InserFirst(&First,11);
    Display(First);
    Displaylargest(First);
    return 0;
}
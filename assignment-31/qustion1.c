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
void Reverse(PNODE Head){
    int iCnt=1;
    int iDigit=0;

    while(Head!=0){
        while((Head->data)!=0){
            iDigit=(Head->data)%10;
            (Head->data)=(Head->data)/10;
            printf("%d",iDigit);
        }
        printf("\n");
        Head=Head->next;
    }
}
int main(){

    PNODE First=NULL;

    InserFirst(&First,89);
    InserFirst(&First,6);
    InserFirst(&First,41);
    InserFirst(&First,17);
    InserFirst(&First,28);
    InserFirst(&First,11);
    Display(First);
    Reverse(First);
    return 0;
}
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
void DisplayProduct(PNODE Head){
    int iDigit=0;
    int iprod=1;
    while(Head!=0){
        while(Head->data!=0){
            iDigit=(Head->data)%10;
            (Head->data)=(Head->data)/10;
            if(iDigit!=0){
            iprod=iprod*iDigit;
            }
        }
        printf("%d\t",iprod);
        iprod=1;
        Head=Head->next;
    }
}
int main(){

    PNODE First=NULL;

    InserFirst(&First,41);
    InserFirst(&First,37);
    InserFirst(&First,20);
    InserFirst(&First,11);
    Display(First);
    DisplayProduct(First);
    return 0;
}
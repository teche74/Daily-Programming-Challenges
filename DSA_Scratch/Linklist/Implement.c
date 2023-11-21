#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
}typedef Linklist;


Linklist *  CreateNode(int data){
    Linklist * node  = (Linklist *) malloc ( sizeof(Linklist));
    node->data =data;
    node->next = NULL;

    return node;
}

void Print(Linklist * head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}

Linklist * CreateList(){
    int count;
    printf("Enter Count of Nodes : ");
    scanf("%d",&count);

    Linklist * dummy = CreateNode(-1);
    Linklist * tail = dummy;
    
    while(count--){
        int data;
        printf("Enter data : ");
        scanf("%d", &data);
        Linklist * node = CreateNode(data);
        tail->next =node;
        tail=tail->next;
    }
    tail->next =NULL;
    Linklist* ptr  =dummy;
    Linklist * head= ptr->next;
    free(ptr);
    return head;
}

Linklist * Reverse(Linklist * head){
    Linklist * prev =NULL,*curr = head,*temp =NULL;

    while(curr!=NULL){
        temp =curr->next;
        curr->next =prev;
        prev =curr;
        curr =temp;
    }
    return prev;
}

int main(){
    Linklist* l1  = CreateList();

    Print(l1);


    Linklist * rev= Reverse(l1);

    Print(rev);
}

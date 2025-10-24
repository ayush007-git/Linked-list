#include "llfunctions.h"
#include<stdio.h>
#include<stdlib.h>


void inserttoLL(LL* ll,int val){
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = val;
    newnode->next = NULL;
    if(!ll->head){
        ll->head = newnode;
        return;
    }
    node*temp = ll->head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    return;
}

int deletefromLL(LL* ll,int val){
    if(!ll->head){
        return -1;
    }
    if(ll->head->data==val){
        ll->head = ll->head->next;
        return 1;
    }
    node*temp = ll->head;
    while(temp->next!=NULL && temp->next->data!=val){
        temp = temp->next;
    }
    if(temp->next==NULL){
        return -1;
    }else{
        temp->next = temp->next->next;
        return 1;
    }
}


int serchinLL(LL* ll,int v){
    if(ll->head==NULL) return -1;
    if(ll->head->data==v) return 0;
    node *temp = ll->head;
    int ind = 1;
    while(temp->next!=NULL && temp->next->data!=v){
        temp = temp->next;
        ind++;
    }
    if(temp->next==NULL){
        return -1;
    }else{
        return ind;
    }
     
}

void printall(LL*ll){
    if(!ll->head){
        printf("\nEmpty ll\n");
    }
    node *temp = ll->head;
    while(temp){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

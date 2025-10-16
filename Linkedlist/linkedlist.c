#include<stdio.h>
#include<stdlib.h>

typedef struct Node_{
    int data;
    struct Node_* next;
}node;

typedef struct LL_{
    node* head;
}LL;

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

int main(){
    LL ll1;
    ll1.head = NULL;
    int wb = 1;
    while (wb)
    {
        printf("Enter 1 to insert an element\nEnter 2 to delete an element\nEnter 3 to search for an element\nEnter 4 to print the ll\nEnter 5 to break\nEnter your choice : ");
        int choice;
        scanf("%d",&choice);
        int v;
        switch (choice)
        {
        case 1:
            scanf("%d",&v);
            inserttoLL(&ll1,v);
            printf("\nElement Inserted\n");
            break;
        
        case 2:
            scanf("%d",&v);
            int n = deletefromLL(&ll1,v);
            if(n==-1){
                printf("\n\nElement not found\n");
            }else{
                printf("\n\nElement Deleted\n");
            }
            break;
        
        case 3:
            scanf("%d",&v);
            int f = serchinLL(&ll1,v);
            if(f!=-1)printf("\nElement found at index %d\n",f);
            else printf("\nElement not found\n");
            break;

        case 4:
            printall(&ll1);
            printf("\n");
            break;
        case 5:
            wb=0;
            break;
        default:
            printf("\n\nWrong input\n\n");
            break;
        }
    }
    

}
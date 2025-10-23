#include<stdio.h>
#include<stdlib.h>
#include "llfunctions.h"


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
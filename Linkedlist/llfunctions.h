#ifndef LLFUNCTIONS_H
#define LLFUNCTIONS_H

typedef struct Node_{
    int data;
    struct Node_* next;
}node;

typedef struct LL_{
    node* head;
}LL;

void inserttoLL(LL* ll,int val);
int deletefromLL(LL* ll,int val);
int serchinLL(LL* ll,int v);
void printall(LL* ll);

#endif
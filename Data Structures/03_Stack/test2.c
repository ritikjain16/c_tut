#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node * next;
};

struct node * top = NULL;

void lltraversal(struct node *ptr){

    while(ptr != NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int isEmpty(struct node * top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct node * top){
    struct node * p = (struct node *)malloc(sizeof(struct node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct node * push(struct node * top,int data){
    if(isFull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct node * p = (struct node *)malloc(sizeof(struct node));
        p->data=data;
        p->next=top;
        top=p;
        printf("%d pushed into stack\n",data);
        return top;
    }
}

int pop(struct node * tp){
    if(isEmpty(tp)){
        printf("Stack underflow\n");
    }
    else{
        struct node * p = tp;
        int x= p->data;
        top = tp->next;
        free(p);
        return x;
    }

}

int main(){
    top = push(top,1);
    top = push(top,2);
    top = push(top,3);
    top = push(top,4);
    top = push(top,5);

    printf("\n%d popped from stack\n",pop(top));
    printf("%d popped from stack\n",pop(top));
    printf("%d popped from stack\n",pop(top));
    printf("%d popped from stack\n",pop(top));
    printf("%d popped from stack\n",pop(top));
    // printf("%d popped from stack\n",pop(top));
    

    // lltraversal(top);
return 0;
}
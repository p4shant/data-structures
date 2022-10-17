#include<stdio.h> 
#include<stdlib.h> 

struct node{
    int info; 
    struct node *next;
}; 

struct node *head;
void create(){
    struct node *ptr,*temp; 
    ptr=head; 
    int data;
    temp =(struct node *)malloc(sizeof(struct node) ); 
    printf("\nEnter the value of information part : ");
    scanf("%d",&data); 
    temp->info=data; 
    temp->next=NULL; 
    if(head==NULL){
        head=temp; 
        temp->next=head;
    } 
    else{
        while(ptr->next!=NULL){
            ptr=ptr->next;
        } 
        ptr->next=temp; 
        temp->next=head;
    }
} 

display(){
    struct node *ptr; 
    if(ptr==NULL){
        printf("No Node in Circular Link LIst \n");        
    } 
    else{
        printf("\nCircular link list\n"); 
        while(ptr->next!=head){
            printf("%d",ptr->next); 
            ptr=ptr->next;
        } 
        printf("%d",ptr->data); 
    }
}
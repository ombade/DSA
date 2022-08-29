#include<stdio.h>
#include<stdlib.h>
struct node

{
    int data;
    struct node *next;

    
};          
void linkinListTTraversal(struct node *head){
 struct node *ptr = head;
 do
 {
       printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
 } while (*ptr! = head);

 struct node *ptr
 


#include <stdio.h>
#include <malloc.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
int n;
// making the struct node func with input of the data 
struct node* createNode(int data){
    struct node *n ;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
int main (){
    struct node *p = createNode(2);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(4);

    // linking the root node with left and right children
    p->left =p1;
    p->right =p2;
    return 0;

printf("%d the value of is ", n);
}


#include<stdio.h>
class treeNode{
public:
    int x;
    treeNode *parent;
    treeNode *left;
    treeNode *right;
};

class binaryTree{
public:
    treeNode *r;
    int n;

    binaryTree();
    treeNode* buildT_NegBased(int[],int*,treeNode*);
    treeNode* newNode(int);

    void preorderRecursive(treeNode*);
    void inorderRecursive(treeNode*);
    void postorderRecursive(treeNode*);
    void preorderIterative();
    void inorderIterative();

};

binaryTree::binaryTree()
{
    r=NULL;
    n=0;
}

treeNode* binaryTree::newNode(int data)
{
    treeNode *node=new treeNode();
    node->x=data;
    node->parent=NULL;
    node->left=NULL;
    node->right=NULL;
    return node;
}

treeNode* binaryTree::buildT_NegBased(int arr[],int *currentIndex,treeNode *p)
{
    *currentIndex=*currentIndex+1;
    if(arr[*currentIndex]==-1)
        return NULL;
    treeNode *u=newNode(arr[*currentIndex]);
    n++;

    if(*currentIndex==0)
        r=u;

    u->parent=p;
    u->left=buildT_NegBased(arr,currentIndex,u);
    u->right=buildT_NegBased(arr,currentIndex,u);

    return u;
}

void binaryTree::preorderRecursive(treeNode *u)
{
    if(u==NULL)
        return ;
    printf("%d ",u->x);
    preorderRecursive(u->left);
    preorderRecursive(u->right);
}

void binaryTree::inorderRecursive(treeNode *u)
{
    if(u==NULL)
        return ;
    inorderRecursive(u->left);
    printf("%d ",u->x);
    inorderRecursive(u->right);
}

void binaryTree::postorderRecursive(treeNode *u)
{
    if(u==NULL)
        return ;
    postorderRecursive(u->left);
    postorderRecursive(u->right);
    printf("%d ",u->x);
}

void binaryTree::preorderIterative(){
    treeNode *u = r;
    treeNode *prev = NULL;
    treeNode *next;

    while( u != NULL){
        if(prev == u->parent){
            printf("%d ", u->x);    //Print only if the node comes from the parent
            if(u->left != NULL)
                next = u->left;
            else if(u->right != NULL)
                next = u->right;
            else
                next = u->parent;
        }
        else if(prev == u->left){
            if(u->right != NULL)
                next = u->right;
            else
                next = u->parent;
        }
        else
            next = u->parent;

        prev = u;
        u = next;
    }
}


void binaryTree::inorderIterative()
{
    treeNode *u=r;
    treeNode *prev=NULL;
    treeNode *next;

    while(u!=NULL){
        if(prev==u->left){
            printf("%d ",u->x);
            if(u->parent!=NULL)
                next=u->parent;
            else if(u->right!=NULL)
                next=u->right;
            else
                next=u->left;
        }
        else if(prev==u->parent){
            if(u->right!=NULL)
                next=u->right;
            else
                next=u->left;
        }
        else
            next=u->left;
        prev=u;
        u=next;
    }
}


int main()
{
    binaryTree ob;
    int arr[]={1,2,4,-1,7,-1,-1,-1,3,5,-1,-1,6,8,-1,10,-1,-1,9,-1,-1};

    int currentIndex=-1;
    printf("Building the tree..\n");
    treeNode *r=ob.buildT_NegBased(arr,&currentIndex,NULL);
    printf("The tree was build with no of nodes:%d\n",ob.n);
    printf("The root is:%d\n\n",r->x);

    printf("\nPreorder traversal: ");
    ob.preorderRecursive(r);

    printf("\nInorder traversal: ");
    ob.inorderRecursive(r);

    printf("\nPostorder traversal: ");
    ob.postorderRecursive(r);

    printf("\nPreorder Traversal (Iterative): ");
    ob.preorderIterative();
    //printf("\n\n");

    printf("\nInorder traversal Iterative: ");
    ob.inorderIterative();
    printf("\n\n");
}

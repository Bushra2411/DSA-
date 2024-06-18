 #include<stdio.h>
#include<stdlib.h>

int linearsearch(int a[],int s,int key){
    int i=0;
    while(i<s & a[i]!=key)
        i++;
    if(i==s){
        return -1;
    }
    else{
        return i+1;
    }
}

int main()
{
    int a[10],n,i;

    for(i=0;i<8;i++){
        scanf("%d",&a[i]);
    }

    int s=sizeof(a)/sizeof(a[0]);
    int key;
    scanf("%d",&key);

    int pos=linearsearch(a,s,key);
    if(pos==-1){
        printf("not found\n");
    }
    else
        printf("key %d found at position %d\n",key,pos);

    return 0;
}

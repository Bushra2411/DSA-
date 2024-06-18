#include<stdio.h>


int binarysearch(int a[],int s,int key,int b,int e){
    int m;
    if(b>e){
        return -1;
    }
    else{
        m=(b+e)/2;
        if(a[m]==key)
            return m+1;

        else if(key>a[m])
           binarysearch(a,s,key,m+1,e);

        else
            binarysearch(a,s,key,b,m-1);

    }
}

int main()
{
    int a[10],i;

    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    int s=sizeof(a)/sizeof(a[0]);
    int key;
    scanf("%d",&key);

    int pos=binarysearch(a,s,key,0,s-1);
    if(pos==-1){
        printf("not found!\n");
      }
    else{
        printf("key %d found at position: %d\n",key,pos);
    }

    return 0;
 }

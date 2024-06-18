#include<stdio.h>

void bubblesort(int a[],int s)
{
    int i;
    int j;
    int temp;
    for(i=0; i<=s-2; i++){
        for(j=s-1; j>=i+1; j--){
            if(a[j] < a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}

int main()
{
    int a[10],i;

    for(i=0;i<8;i++){
        scanf("%d",&a[i]);
    }

    int s=sizeof(a)/sizeof(a[0]);
    bubblesort(a,s);

    for(i=0;i<s;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct divRem{
   int div;
   int rem;
};

int sum(int x,int y){
    return x+y;
}

int sub(int x,int y){
    return x-y;
}

int prod(int x,int y){
    return x*y;
}

struct divRem * division(int x, int y){
    struct divRem *dr;
    dr = (struct divRem *)malloc(sizeof(struct divRem));
    dr->div=x/y;
    dr->rem=x%y;
    return dr;
};

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int result=sum(a,b);
    printf("%-15s%d\n","sum is: ",result);

    result=sub(a,b);
    printf("%-15s%d\n","sub is: ",result);

    result=prod(a,b);
    printf("%-15s%d\n","prod is: ",result);

    struct divRem *r=division(a,b);
    printf("%-15s%d\n","division is: ",r->div);
    printf("%-15s%d\n","remember is: ",r->rem);

    return 0;

}

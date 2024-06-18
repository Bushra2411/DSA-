#include<stdio.h>

class demo {
public:
      int a;
      float b;

      int sum (int x,int y){
          return x+y;
  }
};

int main()
{
    demo ob;
    int a;
    float b;
    scanf("%d",&ob.a);
    scanf("%f",&ob.b);

    int result = ob.sum(20,20);
    printf("%d %0.4f %d\n",ob.a,ob.b,result);

     return 0;
}

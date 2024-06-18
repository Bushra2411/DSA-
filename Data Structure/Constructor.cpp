#include <stdio.h>

struct divRem{
   int div;
   int rem;
};

class Calculator{
public:
    Calculator (int,int);
    int sum();
    int sub();
    int prod();
    struct divRem division();

private:
    int a,b;
};

Calculator :: Calculator(int x,int y){
    a = x;
    b = y;
}

int Calculator :: sum(){
    return a + b;
}

int Calculator :: sub(){
    return a - b;
}

int Calculator :: prod(){
    return a * b;
}

struct divRem Calculator:: division(){
    struct divRem dr;
    dr.div = a / b;
    dr.rem = a % b;
    return dr;
}

int main()
{

}

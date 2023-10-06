/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：用递归函数计算x^n (n>=1)的值。
      例：(括号内为说明)
      输入
      2 3        (x=2,n=3)
      输出
      Root = 8.00

-------------------------------------------------------*/
#include <stdio.h>
char is_su_shu(int n) ;
double fun(int n, double x);
int fun2(int n);
int fibonacci(int a);
long Factorial(int n);
int main()
{
    int n;
    double x, root;

   // scanf("%lf%d", &x, &n);
    scanf("%d", &n);
    root =  Factorial(n);
    printf("Root = %0.2f\n", root);
    while (1)
        ;
}

double fun(int n, double x)  //递归计算 x的n次幂
{
    /**********Program**********/
    if(n == 1)
    {
        return x;
    }
    return x*fun(n-1, x); 
    /**********  End  **********/
}

int fun2(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n+fun2(n-1);
}

char is_su_shu(int n)
{
    static int i=2;
    if(n<=3 || i == n-1 )
    {
        return  1;
    }
    if(n % i == 0)
    {
        return 0;
    }
    ++i;
    is_su_shu(n);
}
//斐波那契数列的递归实现
int fibonacci(int a)
{
    if (a <= 2)
    {
        return 1;
    }
    return fibonacci(a - 1)+ fibonacci(a - 2);
}

long Factorial( int n)
{
    if( n<=1 )
    {
        return 1;
    }
    return n*Factorial(n-1);
}
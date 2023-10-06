/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：编写函数，交换二个变量的值,要求，使用指针作函数参数。

-------------------------------------------------------*/
#include<stdio.h>

void main(  )
{  
    int  a=3,  b=5;
    void  swap( int *,int  *);
    printf("Before change :a=%d, b=%d\n", a, b);
    swap (&a,&b);
    printf("After change :a=%d, b=%d\n", a, b);
}

void  swap (int *x,  int *y)
{  
    
    /**********Program**********/
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
    /**********  End  **********/

}



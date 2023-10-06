 #include <iostream>



#define F1 
#define F2
#define F3



#ifdef F1
#include "./inc/fun1.h"
#endif // DEBUG

#ifdef F2
#include "./inc/fun2.h"
#endif // DEBUG

#ifdef F3
#include "./lib/fun3.h"
#endif // DEBUG

int main()
{
    int a =1;
    std::cout << "Hello, main====runing" << std::endl;
    #ifdef F1
        fun1();
        a=2;
    #endif // F1
    #ifdef F2
        fun2();
        a=3;
    #endif // F2
    #ifdef F3
        fun3();
    #endif // DEBUG
    
    printf("1\n");
    printf("2\n");
    printf("3\n");
}
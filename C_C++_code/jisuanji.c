#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char* next;
double opd[1000];
int opt;
double *popd = opd;
#define PUSH(n) { *popd++ = n; }
#define POP() (*--popd)
#define TOP() (*(popd-1))
#define EMPTY() (popd == opd)
#define SIZE() (popd - opd)
void fail(char* s)
{
printf("wrong");
return ;
}
#define lbr() { if(*next++ == '(') ; else fail("("); }
#define rbr() { if(*next++ == ')') ; else fail(")"); }
void term();
void lv1();
void lv2();
void cal(char);
 
void expr()
{
    term(); 
	lv1();
}
 
void term()
{
    double num = 0;
    if(isdigit(*next)) 
	{
      do {
            num = num * 10 + (*next - '0');
        } 	while(isdigit(*++next));
        PUSH(num);
    } 
	else if(*next == '(')
	{
        lbr();
		 expr();
		  rbr();
    } 
	else 
	{
        fail("term");
    }
}
 
void lv1()
{
    char c;
    while(1)
	 {
        c = *next;
        if(c == '+' || c == '-')
		{
            ++next;
            lv2();  ++opt; cal(c);
        } 
		else if(*next == '*' || *next == '/')
		 {
            lv2();
        } 
		else 
		{
            break;
        }
    }  
}
 
void lv2()
{
    char c;
    while(1) 
	{
        c = *next;
        if(c == '*' || c == '/') 
		{
            ++next;
            term(); 
			
			 ++opt; cal(c);
        } 
		else if(isdigit(*next)) 
		{
            term();
        }
		 else 
		 {
            break;
        }
    }
}
 
double eval(char* s)
{
    next = s;
    expr();
    return TOP();
}
 
void cal(char c)
{
    double lhs, rhs, r;
    if(SIZE() > 1) {
        rhs = POP();
        lhs = POP();
        switch(c)
        {
        case '+': r = lhs + rhs; break;
        case '-': r = lhs - rhs; break;
        case '*': r = lhs * rhs; break;
        case '/': r = lhs / rhs; break;
        }
        PUSH(r);
        --opt;
    }
}
int main()
{
    char a[]={"1+1"};
 	sprintf(a,"%g",eval(a)) ;
 	printf("%g\n", eval(a));
    printf("heheheha哈哈哈");
    return 0;
}

/*
D:\MinGW64

C:\Users\23841\Desktop\C_code
*/
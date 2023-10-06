/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：求小于或等于lim的所有素数并放在aa数组中，该函数返回
      所求出素数的个数。

===>输入 7 输出个数为4,即2,3,5,7
------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#define MAX 100

int fun(int lim,int aa[MAX])
{
  /**********Program**********/
	int i, num, t = 0;
	for (num = 2; num <= lim; num++) {
		for (i = 2; i <= num-1 ; i++)
	  		if (num%i==0) break;
		if (i==num) aa[t++]=num;
	}
	return t;  
  /**********  End  **********/
}
main()
{
  int limit,i,sum;
  int aa[MAX];
  printf("Please input ainteger:");
  scanf("%d",&limit);
  sum=fun(limit,aa);
  for(i=0;i<sum;i++){
    if(i%10==0&&i!=0) printf("\n");
    printf("%5d",aa[i]);
    
  }
 
}



/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ���С�ڻ����lim����������������aa�����У��ú�������
      ����������ĸ�����

===>���� 7 �������Ϊ4,��2,3,5,7
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



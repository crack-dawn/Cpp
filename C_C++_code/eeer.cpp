#include <stdio.h>

#include <math.h>
//静态法

int main()

{

 float q, t, r, u, x, x1, x2, n1, e1;

 float p1 = 981,g = 9.80,p0=1.293,l = 2.00e-3,b = 8.23e-3,p = 0.101e6,d = 5.00e-3,n = 1.83e-5;

 int n2;

 double e2, w,e0=1.602e-19;

 printf("先输入时间,再输入电压\n");

 //  scanf("%f %f",&t,&u);
 //----------实验需测量数据---------
 t = 24.0; //下落时间/s
 u = 132;  //平衡电压/V
 //--------------------------------
 r = sqrt(9 * n*l / (2 * (p1-p0)*g*t));

 x1 = ((n*l) / (t*(1 + b / (p*r))));

 x2 = x1*x1*x1;

 x = sqrt(x2);

 q = 18 * 3.14*x*d / (sqrt(2 * (p1-p0)*g)*u);

 n1=q/(1.6e-19);

 n2=(int)n1;

    if(n1-n2>=0.5)

        n2=n2+1;

    else if(n1-n2<0.5||n1-n2>=0)

        n2=n2;

    else

        printf("error");

 e2=q/n2;

 w=(e2-e0)/e0*100;

    printf("半径r= %e\n",r);

    printf("油滴带电量q= %e\n",q);

    printf("油滴所带基本电荷n= %d\n",n2);

    printf("实验数据所得电荷量e= %e\n",e2);

    printf("实验误差w= %f% \n", w);

    return 0;

}


//---------------------------------------------------------------
// 动态法

#include <iostream>

#include <cmath>

using namespace std;

int main()

{
    float q, t, r, u, x, x1, x2, n1, e1, w, tg, te;

    float p1 = 981, g = 9.794, l = 2.00e-3, b = 8.22e-3, P = 0.1013e6, d = 5.00e-3, n = 1.83e-5, c = 1.602e-19;

    //  cout<<"先输入下降时间,再输入上升时间，再输入上升时的电压:"<<endl;
    //  cin >> tg>>te>>u;

    //----------实验需测量数据---------
    tg = 23.90; //下降时间
    te = 47.10; //上升时间
    u = 252;    //上升电压
    //-------------------
    r = sqrt(9 * n * l / (2 * p1 * g * tg));

    x = sqrt((n * l) / (1 + b / (P * r)));

    q = ((18 * 3.14) / sqrt(2 * p1 * g)) * x * x * x * (d / u) * (1 / tg + 1 / te) * sqrt(1 / tg);

    n1 = q / (1.602e-19);

    if (n1 - int(n1) >= 0.5)

    {

        n1 = int(n1) + 1;
    }

    else if (n1 - int(n1) < 0.5 || n1 - int(n1) >= 0)

    {

        n1 = int(n1);
    }

    else

    {

        cout << "error";
    }

    e1 = q / n1;

    w = (e1 - c) / c;

    if (w < 0)

        w = 0 - w;

    else

        w = w;

    cout << "22半径r=   " << r << endl;

    cout << "油滴带电量q=   " << q << endl;

    cout << "油滴所带基本电荷n=   " << n1 << endl;

    cout << "基本电荷带电量e=   " << e1;

    printf("\n");

    printf("相对误差=   %lf%\n", w);

    return 0;
}
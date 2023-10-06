#include <cstdlib>
#include <iostream>
using namespace std;

int control(int i);


int main()
{
    int i;
    cout << "1、关机" << endl
         << "2、重启" << endl
         << "3、注销" << endl
         << "4、休眠" << endl
         << "5、取消关机操作，退出" << endl;
    cin >> i;
    control(i);

    return 0;
}


int control(int i)
{
    switch (i)
    {
    case 1:
    {
        int j;
        cout << "1、关机" << endl
             << "2、定时关机" << endl
             << "3、取消定时关机" << endl
             << "4、取消" << endl;
        cin >> j;
        switch (j)
        {
        case 1:
            system("shutdown -s -t 180");
            break;
        case 2:
        {
            int t;
            cout << "1、30分钟后关机" << endl
                 << "2、60分钟后关机" << endl
                 << "3、90分钟后关机" << endl
                 << "4、120分钟后关机" << endl
                 << "5、取消" << endl;
            cin >> t;
                switch (t)
                {
                    case 1:
                        system("shutdown -s -t 1800");
                        break;
                    case 2:
                        system("shutdown -s -t 3600");
                        break;
                    case 3:
                        system("shutdown -s -t 5400");
                        break;
                    case 4:
                        system("shutdown -s -t 7200");
                        break;
                    case 5:
                        system("shutdown -a");
                        break;
                    default:
                        system("shutdown -s -t 32400");
                        break;
                    }
                    break;
                }
                case 3:
                    system("shutdown -a");
                    break;
                case 4:
                    break;
                default:
                    break;
            }
        break;
    }
    case 2:
        system("shutdown -r");
        break;
    case 3:
        system("shutdown -l");
        break;
    case 4:
        system("shutdown -h");
        break;
    case 5:
        break;
    default:
        system("shutdown -a");
        break;
    }
    return 1;
}
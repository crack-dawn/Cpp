#include <string>
#include <iostream>
using namespace std;
int main()
{

      string str("This is an example phrase.");

      string::iterator it;

      //�ڣ�1���ַ���

      str.erase(10, 8);

      cout << str << endl; // "This is an phrase."

      //�ڣ�2���ַ���

      it = str.begin() + 9;

      str.erase(it);

      cout << str << endl; // "This is a phrase."

      //�ڣ�3���ַ���

      str.erase(str.begin() + 5, str.end() - 7);

      cout << str << endl; // "This phrase."
      getchar();
      getchar();
      getchar();
      return 0;
}
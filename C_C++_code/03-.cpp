#include <string>
#include <iostream>
using namespace std;
int main()
{

      string str("This is an example phrase.");

      string::iterator it;

      //第（1）种方法

      str.erase(10, 8);

      cout << str << endl; // "This is an phrase."

      //第（2）种方法

      it = str.begin() + 9;

      str.erase(it);

      cout << str << endl; // "This is a phrase."

      //第（3）种方法

      str.erase(str.begin() + 5, str.end() - 7);

      cout << str << endl; // "This phrase."
      getchar();
      getchar();
      getchar();
      return 0;
}
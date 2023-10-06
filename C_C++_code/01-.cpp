
#include <iostream>
#include <string>
using namespace std;

char alpha( int n )
{
      return ( 'A' + n ) % 26 + 'A';
}

int main()
{
      string   cc;
      int n;
 while( cin>>n )
 {
       printf(  "%c\n", alpha(n)  );
 }
      while(1);
      return 0;
}
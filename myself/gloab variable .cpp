#include<iostream>
using namespace std;


void a(int& i)
{
    char ch = 'a';
   cout<< i << endl;
 //  b(i);
}


void b(int& i)
{
  cout<< i << endl ;
}
 
int main()
{
  int i = 5;
  //a(i); 
 /* {
    int x = 2;
    cout<< x << endl;
  }
*/

cout<< i << endl;  

    return 0;
}

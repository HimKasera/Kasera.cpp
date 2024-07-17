#include<iostream>
using namespace std;
int main(){
   // int *p=0;
    //cout<< *p << endl;
 /* int i = 5;

  int *q = &i;
  cout<<q<<endl;
  cout<<*q<<endl;

  int *p = 0;
   p = &i;

  cout<< p << endl;
  cout<< *p << endl;  */ 

  int num =0;
  int  a = num;
  a++;
  cout<<num << endl;

  int *p = &num;
  cout<< "before "<<num <<endl;
  (*p)++ ;
  cout <<"after "<<num<<endl;
  
// copying a pointer
  int *q = p;
  cout<< p << " - "<< q << endl;
  cout<< *p << " - "<< *  q << endl;

  // important concept
   int  i = 3;
   int  *t = &i;
// cout<< (*t)++ << endl;

*t = *t + 1;
cout<< *t << endl;
cout<< " before t "<< t<< endl;
t = t+1;
cout<< " before t "<< t<< endl;
        return 0 ; 
} 
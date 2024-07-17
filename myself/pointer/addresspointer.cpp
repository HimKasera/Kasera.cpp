#include<iostream>
using namespace std;
int  main(){
   /* int arr[10] = {0};
    int *p  = &arr[10];
    cout<< *p<< endl;*/

    int arr[10];

   //arr = arr+1;
   // cout<<&arr;

   int *ptr = &arr[0];
   cout<< ptr << endl;
   ptr = ptr +1;
   cout<< ptr << endl;
}
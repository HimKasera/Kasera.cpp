#include<iostream>
using namespace std;
int  main(){
    int arr[5] = { 1,2,3,4,5};
    char ch[8] = "kasera" ; 
    cout<< arr << endl;

    //attention here
    cout<< ch << endl;

    //prints entire string
char *c = &ch[0];
cout<< c<< endl;

char temp = 'z' ;
char *p = &temp;
cout<< p << endl;

    return 0 ;

}
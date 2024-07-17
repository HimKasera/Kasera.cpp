#include<iostream>
using namespace std;

#define pi 3.14
int main(){
    int r = 5;
   // double pi = 3.14;
    double area = 3.14 * r * r;
    cout<<"Area is  ,"<< area << endl;
   // pi = pi+1; // error: lvalue required as left operand of assignment
     {
    cout<<"pi :-"<<pi<<endl;
    
    }
    return 0;
}
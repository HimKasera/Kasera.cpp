#include<iostream>
using namespace std;
/*int & fun(){
    static int x = 10;
    return x;
}
int main(){
    int &y = fun();
    y  = 20;
    cout<<fun();
    return 0;
}
*/   // output 20

int main(){
    string s1 = "Himanshu" , s2 = " Kasera";
    string &&s3 = s1 + s2;
    s3 = "I Love " + s3;
    cout<<s3<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    cout<<"original string is"<<endl;
    string s;
    cin>>s;

    string nstr ="";

    int l = s.length() - 1 ;
    while(l >= 0){
        nstr = nstr + s[l];
        l--;

    }
    cout<<"reverse string is :- " << nstr;
}
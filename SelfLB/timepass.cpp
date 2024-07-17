#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x<200){
        cout<<" Kejariwal ki sarkar hain";
    }
    else if ( 200>x && x<=500){
        cout<<x*5;
    }
    else cout<<x*10;
    cout<<"paise bhej do";
}
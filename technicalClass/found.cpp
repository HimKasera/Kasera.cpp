#include<iostream>
#include<set>

using namespace std;
int main(){
    set<char> s = {'a','b','c','d'};
    char x;
    cin>>x;

    auto it = s.find(x);
if(it != s.end()){
    cout<<"find";
}
else cout<<"not find";
}
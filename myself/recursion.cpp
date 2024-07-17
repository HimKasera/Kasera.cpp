#include <bits/stdc++.h>
using namespace std;
int recursion(int n){
    //base case
    if(n<=0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int x=recursion(n-1)+recursion(n-2);
    cout<<"n="<<n<<" "<<"x="<<x<<endl;
    return x;
}
int main(){

    cout<<recursion(3);
    return 0;
}
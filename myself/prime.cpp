#include<iostream>
using namespace  std;
//int main()
bool isPrime(int n)
{
    if(n<=1)
    return false;
    
 for(int i = 2; i<n;i++){
      if(n%i == 0){

        return false;
      }
      return true;
 }
}
int main(){
    cout<<"enter your choice"<<endl;
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"it is a prime number"<<endl;
    }
    else {
        cout<<"it is a prime not number"<<endl;
    }
    return 0;
}
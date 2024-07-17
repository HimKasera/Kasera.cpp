#include<iostream>
using namespace std;
int main(){
int n,m,i;
cout<<"provid a and b"<<endl;
cin>>n>>m;
int ans1=0,ans2=0;
for(i=1;i<m;i++)
{
    if(i%n==0){
        ans1=ans1+i;
    
        
    }
    else {
        ans2=ans2+i;
    }
}
cout<<ans2-ans1<<endl;
return 0;
}


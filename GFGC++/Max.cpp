#include<iostream>
using namespace std;
int max(int arr[], int n){
    int ans = arr[0];
    for(int i = 1 ; i < n ; i++){
        if(arr[i] > ans)
        ans = arr[i];
    }
    return ans ;
}
int main(){
    int n ; 
    cin>>n;
    cout<<"Number of Element"<<n<<endl;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>> arr[i];
    }
    int ans = max(arr,n);
    cout<<"Maximum Element"<<endl;
    cout << ans ;
    return 0;
}
#include<iostream>
using namespace std;
void function(int arr[]){
    int n = sizeof(arr)/sizeof(arr[0]);  //Size of array
    for(int i ; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
    int main(){
        int arr[] = {10,20,30,40};
        int n = sizeof(arr)/sizeof(arr[0]);   //Size of array

        for(int i = 0 ; i <n ; i++){
            cout<< arr[i]<<" ";
            }
            cout<<"\n";
            fun(arr);

         return 0;
        }
    

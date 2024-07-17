#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20};
    int *ptr = arr;
    ++*ptr;
    cout<<arr[0]<<endl<<arr[1]<<endl<<*ptr<<endl;
    return 0;
}
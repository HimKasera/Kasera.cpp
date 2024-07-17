#include<iostream>
using namespace std;
int main(){
    int arr[4] = {11,5,2,3};
    int l = 0 ;
    int j = sizeof(arr);
    while(l<j){
        int k = 0;
        k = arr[l];
        arr[l] = arr[j];
        arr[j] = k;
        l++;
        j--;
    }

    for( int i = 0 ; i<sizeof(arr); i++){
        cout<< arr[i]<<endl;
    }
    return 0;
}
#include<iostream>

using namespace std;

int main(){
    int arr[6] = {2,3,4,5,6,7};
    int arr1[9] = {1,2,3,4,5,6,7,8,9};

    int s = sizeof(arr)-1;
    int i = 0;
    int j = 1;
    while(j<s){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i=i+2;
        j=j+2;
    }

    for(int h=0;h<6;h++){
        cout<<arr[h]<<endl;
    }
    return 0;


}
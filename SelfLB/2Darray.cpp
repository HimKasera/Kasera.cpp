#include<iostream>
using namespace  std;
bool isPresent(int arr[][4], int target , int i,int j){
return 1 ;
}

int main(){

    //create 2d array


     int arr[3][4];
       
       // int arr[3][4] = {1,2,3,11,22,33,111,222,333,1111,2222,3333};
    //int arr[3][4] = {{11,111,11111},{2,22,222,2222},{3,33,333,3333}};

    /* //taking input

    for( int i = 0; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++){
            cin>> arr[i][j];
        }
    }

    //print
    for( int i = 0; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<< endl;
    }
    cout<<endl;  */

     //taking input

    for( int i = 0; i<4; i++)
    {
        for(int j=0 ; j<3  ; j++){
            cin>> arr[j][i];
        }
    }


     for( int i = 0; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<< endl;
    }

    cout<<"enter the element to search"<<endl;
    int target ;
    cin>>target;

    if(isPresent(arr, target,3,4) ){
        cout<<"element found"<<endl;
    }
    else {cout<<"nahi mil rha ";
    }
}
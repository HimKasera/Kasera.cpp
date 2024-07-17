 #include<iostream>
 using namespace std;
 int main(){
    int arr[10] = {2,1 ,5,6};
    cout<<"address of first memory block is" << arr << endl;
    cout<<"address of first memory block is" << &arr[0] << endl;
    cout<<"address of first memory block is" << &arr[1] << endl;

    cout<<"4th -> " << *arr << endl;
    cout<<"5th -> " << *arr+1 << endl;  // element me 1 add ho rha 
    cout<<"6th -> " << *(arr+1) << endl; // numbe ra-khisak kr aage wala le rha
    cout<<"6th -> " << *(arr)+1 << endl;  //same 2 line


    int i = 3;
    cout<<i[arr]<<endl;
    cout<<arr[i]<<endl;



    int temp[40];  // 40 beacuse one  location ka size 4 bit ka inteager hain
    cout<<sizeof(temp)<<endl;



    int *ptr = &temp[0];
    cout<<sizeof(ptr) << endl;
    cout<<sizeof(*ptr) << endl;
    cout<<sizeof(&ptr) << endl;8
    aCout<<aEndl; 

    return 0;

 }
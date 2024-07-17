#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40};
    int *ptr1 = arr;
    cout<< *ptr1 << " "<<ptr1<<"\n";
    //ptr++;
    int *ptr2 = ptr1 + 3;
    cout<<*ptr2<<" "<<ptr2<< "\n\n";
    cout<<(ptr2  - ptr1)<<endl; //difference between two pointers
    return 0;

}
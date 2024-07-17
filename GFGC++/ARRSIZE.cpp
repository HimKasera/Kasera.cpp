// size of array
/*#include<iostream>
using namespace std;
int  main() {
    int arr[6] = {1,2};
    cout<< sizeof(arr)/sizeof(arr[0]) << endl; // Output: 2
    return 0;
}
*/
// Range  based loop in C++

/*#include <iostream>
using  namespace std;
int  main(){
    int arr[]={5,7,9,4,8};
    for(int x :arr){
        cout<<x<<" ";
    return 0;
    }
    }*/


    //Modification

    #include <iostream>
    using namespace std;
    int main(){
        int arr[] = {5,7,9,3,4,8};
        for(int  &x : arr) {
            x = x*2;
            for(int x: arr)
            cout << x << " ";
        return 0;}

    }
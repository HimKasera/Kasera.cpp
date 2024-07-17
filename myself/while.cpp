#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    
    int i = 1 , n , arr[i];
   /* while(i<=n){
        cout<< i << " "<<endl;
        i++;
    }
    cout<< "enter the number " << endl;
cin>>n;
    for(int i=1 ; i <= n-1 ; i++){
        cout<< i << endl;
        
    }*/cout<<"number of element"<<endl;
    cin>>n;

    for ( i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
     sort(arr, arr+n);
     cout << "sorted " << endl;
     for( int i = 0 ; i<n ; i++){
        cout<< arr[i]<< "";
     }
     cout<< endl;
    


    return 0;
} // namespace std;

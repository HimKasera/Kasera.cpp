#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    
   auto it = v1.begin();

   v1.insert(it+3,35);
   
   for(int i: v1){
    cout << i<<endl;

   }

}
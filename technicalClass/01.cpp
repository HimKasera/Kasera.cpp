#include<iostream>
#include<set>

using namespace std;
int main()
{

    set<int>s;
     s.insert(6); 
     s.insert(4); 
     s.insert(8); 
     s.insert(5); 
     s.insert(3); 
     s.insert(1); 
     s.insert(0);

     for(auto it:s) {
        cout<<it;
        cout<<endl;
     }
    
    
}
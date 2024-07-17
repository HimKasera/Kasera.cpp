#include<iostream>
using namespace std;

int main() {
    int num = 15;
    int count = __builtin_popcount(num); // Using GCC built-in function to count set bits

    cout << "Number of set bits in " << num << " is: " << count << endl;
    return 0;
}

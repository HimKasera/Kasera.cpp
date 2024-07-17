#include<isotream>
using namespace std;
bool inPolindrom(string &str , int s, int e ){
    if(s >= e)
    return true;
    return (str[s] == str[e]) && inPolindrom(str, s+1 , e+1)
}

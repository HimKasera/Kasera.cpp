#include<iostream>
int fun(int x)
{
    if(x>0)
    {
        fun(--x);
        printf("%d",x);
        fun(--x);
    }
}
    int main()
    {
        int a=3;
        fun(a);
        return 0;
    }
#include <iostream>
int evenOrodd(int a)
{
    if (a%2==0)
    {
       std::cout<<"even";
    }
    else std::cout<<"odd";
}
int main()
{
    evenOrodd(8);
    return 0;
}

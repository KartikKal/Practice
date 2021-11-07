#include <iostream>
bool iseven(int a) 
{
 if (a%2==0)
 return true; 
 else return false; 
}
int main()
{
bool a;
a= iseven(7);
std::cout<< a;
return 0;
}

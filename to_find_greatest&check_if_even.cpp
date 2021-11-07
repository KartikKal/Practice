#include <iostream>
bool iseven(int a)
{
    if (a%2==0)
    return true;
    else return false;
}
int compare(int a, int b, int c)
{
    int greater;
    if (a>b)
    {
        greater= a;
    }
    else
    {
      greater= b;  
    }
    if(greater>c)
    {
        return greater;
    }
    else return c;
}    
int main()
{
    bool a;
    a= iseven(7);
    std::cout<< a;
    return 0;
}

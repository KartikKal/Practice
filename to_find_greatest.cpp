#include <iostream>
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
    int a;
    a= compare(3,5,7);
    std::cout<< a;
    return 0;
}

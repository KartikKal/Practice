// Code to find volume using function overloading
#include <iostream>
int vol(int l)  
{
    return (l*l*l);
}
int vol(int l, int b ,int h)
{
    return (l*b*h);
}
float vol(float r)
{
    return ((4/3)*3.14f*r*r*r);
}
int main()
{
    int a;
    a = vol(7.0f);
    std::cout<< a;
}

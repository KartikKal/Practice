// Code to find volume using function overloading
#include <iostream>
int vol(int l)  
{
    std::cout<<"volume of cube=";
    return (l*l*l);
}
int vol(int l, int b ,int h)
{
    std::cout<<"volume of cuboid=";
    return (l*b*h);
}
float vol(float r)
{
    std::cout<<"volume of circle=";
    return ((4/3)*3.14f*r*r*r);
}
int main()
{
    int a;
    a = vol(9);
    std::cout<< a;
    return 0;
}

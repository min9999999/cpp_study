#include<iostream>

int SimpleFunc(int a=10)
{
    return a+1;
}

int SimpleFunc(int a=10)
{
    return 10;
}

int main(void)
{
    std::cout<<"SimpleFunc() : "<<SimpleFunc()<<std::endl;
    std::cout<<"SimpleFunc() : "<<SimpleFunc()<<std::endl;
    return 0;
}
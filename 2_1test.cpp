#include <iostream>

void swap(int num1, int num2)
{
    int a1;
    a1 = num1;
    num1 = num2;
    num2 = a1; 
}

void swap(char ch1, char ch2)
{
    char a2;
    a2 = ch1;
    ch1 = ch2;
    ch2 = a2; 
}

void swap(double dbl1, double dbl2)
{
    double a3;
    a3 = dbl1;
    dbl1 = dbl2;
    dbl2 = a3; 
}

int main(void)
{
    int num1=20, num2=30;
    swap(num1, num2);
    std::cout << "num1: " << num1 << ", num2: " << num2 << std::endl;

    char ch1='A', ch2='B';
    swap(ch1, ch2);
    std::cout <<"ch1: " << ch1 << ", ch2: " << ch2 << std::endl;

    double dbl1=1.1111, dbl2=2.2222;
    swap(dbl1, dbl2);
    std::cout <<"dbl1: " << dbl1 << ", dbl2: " << dbl2 << std::endl;
    return 0;
}
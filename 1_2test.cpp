#include <iostream>
#include <string>

int main(void)
{
    std::string name;
    std::string number;

    std::cout<<"Enter your name ";
    std::getline(std::cin, name);

    std::cout<<"Enter your phone number ";
    std::getline(std::cin, number);

    std::cout<<"Your name is: "<<name<<std::endl;
    std::cout<<"Your phone number is: "<<number<<std::endl;
    return 0;
}
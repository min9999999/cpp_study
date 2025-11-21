#include <iostream>

int main(void)
{
    int a;
    std::cout << "구구단 몇 단을 출력할까?";
    std::cin >> a;

    for(int i = 1; i <= 9; i++)
    {
        std::cout << a << " x " << i << " = " << a * i << std::endl;
    }
    return 0;
}
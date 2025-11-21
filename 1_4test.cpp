#include <iostream>

int main(void)
{
    int sales;
    std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
    std::cin >> sales;

    while (sales != -1)
    {
        if (sales == -1)
        {
            break;
        }
        else if (sales < 0)
        {
            std::cout << "잘못된 입력입니다. 다시 입력하세요.\n "<< std::endl;
        }
        else
        {
            std::cout << "이번 달 급여: "<< (50 + sales * 0.12) << "만원" << std::endl;
        }

        std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin >> sales;
    }
    std::cout << "프로그램을 종료합니다." << std::endl;
    return 0;
}
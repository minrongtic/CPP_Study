#include <iostream>

//숫자 하나를 입력 받아서, 그 숫자에 해당하는 구구단 출력 프로그램 작성

int main(void)
{
    int num;
    int result = 1;

    std::cout<<"몇 단을 출력할까요? ";
    std::cin>>num;

    for(int i=1; i < 10; i++)
    {
        result = num * i;
        std::cout<<num<<"*"<<i<<" = "<<result<<std::endl;
    };

    
    return 0;
}
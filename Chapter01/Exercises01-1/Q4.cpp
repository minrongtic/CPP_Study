//판매원들의 급여 계산 프로그램

#include <iostream>

int main(void){
    int sell;
    int salary=1;

    std::cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
    std::cin>>sell;

    while(sell != -1) {
        salary = 50 + (sell * 0.12);

        std::cout<<"이번 달 급여: "<<salary<<std::endl;
    }

    std::cout<<"프로그램을 종료합니다."<<std::endl;

}
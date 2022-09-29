//프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서, 입력 받은 데이터를 그대로 출력하는 프로그램 작성

#include <iostream>

int main(void)
{
    char name[100];
    char ph_num[200];

    std::cout<<"이름 입력: ";
    std::cin>>name;

    std::cout<<"전화번호 입력: ";
    std::cin>>ph_num;

    std::cout<<"\n================연락처===============\n"<<std::endl;
    std::cout<<name<<" *** ";
    std::cout<<ph_num<<std::endl;
    std::cout<<std::endl;
    return 0;
}
#include <iostream>
#include <employee.h>
#include <vector>
#include <string>
//#include <employee.cpp>

using namespace std;





int Employee::promote()
{
Employee::cathegory++;
return Employee::cathegory;
}
int Employee::demote()
{
Employee::cathegory--;
return Employee::cathegory;
}
void Employee::printInfo()
{
std::cout<<"Имя: "<<Employee::name<<" ";
std::cout<<"Фамилия: "<<Employee::secondName<<" ";
std::cout<<"Пол: "<<Employee::sex<<" ";
std::cout<<"Возраст: "<<Employee::age<<" ";
std::cout<<"Категория: "<<Employee::cathegory<<std::endl;
std::cout<<"**********"<<std::endl;

}
int Employee::get_cat()
{
    return cathegory;
}



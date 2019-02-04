#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;



class Employee
{
private:
    string name;
    string secondName;
    string sex;
    int age;
    int cathegory;
public:
    Employee(std::string n_name,std::string n_secondName, std::string s_sex,
             int a_age, int a_cathegory) :
            name(n_name),
            secondName(n_secondName),
            sex(s_sex),
            age(a_age),
            cathegory(a_cathegory)
    {

    }
    int promote();

    int demote();

    void printInfo() ;

    int get_cat();

};

#endif // EMPLOYEE_H

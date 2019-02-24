#include <iostream>
#include <employee.h>
#include <vector>
#include <string>

using namespace std;

int main()
{
vector<Employee> umichWorks;
cout<<"Введите количество работников"<<endl;
int n;
cin>>n;

for (int i=0;i<n;i++)
{
 string name,soname;
 cout<<"Введите имя"<<endl;
 cin>>name;
 cout<<"Введите фамилию"<<endl;
 cin>>soname;
 string sex;
 while(1){
 cout<<"Введите пол (""male"" или ""female"" )"<<endl;
 cin>>sex;
 if (sex=="male") break;
 if (sex=="female") break;
 }
 int age=0;
 cout<<"Введите возраст"<<endl;
 cin>>age;
 int cat;
 while(1){
 cout<<"Введите категорию (от 0 и более)"<<endl;
 cin>>cat;
 if (cat>=0) break;
 }
 umichWorks.push_back(Employee(name,soname,sex,age,cat));
}

cout << endl << "Welcome to umichWorks! Here are our loyal employees: " << endl;
    for( auto employee:  umichWorks)
    {
        employee.printInfo();
    }
    cout<<endl<<"За достижения один из работников был повышен, остальные понижены"<<endl;
    for (int i=0;i<n;i++){
       if(i==1){umichWorks[1].promote();}
       else{
           int proverka=umichWorks[i].get_cat();
           if(proverka>0)umichWorks[i].demote();}
    }

    for( auto employee:  umichWorks)
    {
        employee.printInfo();
    }
        return 0;
}

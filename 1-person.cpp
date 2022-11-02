#include<iostream>
#include<Cstring>
using namespace std;
class Person
{
    private:
        char name[40];
        int age;
    public:
        void setName(const char *c)
        {
            strcpy(name,c);
        }
        void setAge(int x)
        {
            age=x;
        }
        int getAge()
        {
            return age;
        }
        char* getName()
        {
            return name;
        }
};
class Employee:public Person
{
    private:
        int empid;
        double salary;
    public:
        void setEmpid(int d)
        {
            empid=d;
        }
        void setSalary(double g)
        {
            salary=g;
        }
        int getEmpid()
        {
            return empid;
        }
        double getSalary()
        {
            return salary;
        }
};
int main()
{
    Employee e1;
    e1.setEmpid(25543);
    e1.setName("Raj");
    e1.setAge(20);
    e1.setSalary(99053.34);
    cout<<"Employee Name   : "<<e1.getName()<<endl;
    cout<<"Employee id     : "<<e1.getEmpid()<<endl;
    cout<<"Employee Age    : "<<e1.getAge()<<endl;
    cout<<"Employee Salary : "<<e1.getSalary()<<endl;
    return 0;
}
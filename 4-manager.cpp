#include<iostream>
#include<Cstring>
using namespace std;
class person
{
    private:
        char name[30],address[100];
        long long int phone_number;
    public:
        void setName()
        {
            cout<<"Enter name:";
            cin.ignore();
            cin.getline(name,30);
        }
        void setAddress()
        {
            cout<<"Enter Address:";
            cin.getline(address,100);
        }
        void setPh_No()
        {
            cout<<"Enter Phone no.:";
            cin>>phone_number;
        }
        char* getName()
        {
            return name;
        }
};
class employee:public person
{
    private:
        int eno;
    public:
        void set_eno()
        {
            cout<<"Enter Employee Number:";
            cin>>eno;
        }
};
class manager:public employee
{
    private:
        char designation[50],department[50];
        double salary;
    public:
        void setDesignation()
        {
            cout<<"Enter Designation:";
            cin.ignore();
            cin.getline(designation,50);
        }
        void setDepartment()
        {
            cout<<"Enter Department:";
            cin.getline(department,50);
        }
        void setSalary()
        {
            cout<<"Enter Salary:";
            cin>>salary;
        }
        float getSalary()
        {
            return salary;
        }
};
int main()
{
    int n;
    cout<<"Enter how many managers you want to enter:";
    cin>>n;
    manager *m1=new manager[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Details of Manager:\n";
        cout<<"---------------------------\n";
        (m1+i)->set_eno();
        (m1+i)->setName();
        (m1+i)->setAddress();
        (m1+i)->setPh_No();
        m1[i].setDesignation();
        m1[i].setDepartment();
        m1[i].setSalary();
        cout<<endl;
    }
    for(int j=1;j<n;j++)
        for(int k=0;k<=n-1-j;k++)
        {
            if(m1[k].getSalary() > m1[k+1].getSalary())
            {
                manager temp;
                temp=m1[k];
                m1[k]=m1[k+1];
                m1[k+1]=temp;
            }
        }
    cout<<"Manager with highest salary is :"<<m1[n-1].getSalary()<<endl;
    cout<<"And, Manager name is : "<<m1[n-1].getName()<<endl;
    delete []m1;
    return 0;
}

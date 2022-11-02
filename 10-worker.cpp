#include<iostream>
using namespace std;
class worker
{
    private:
        int code;
        string name;
        float salary;
    public:
        void setCode()
        {
            cout<<"Enter code : ";
            cin>>code;
        }
        void setNAme()
        {
            cout<<"Enter Name : ";
            fflush(stdin);
            getline(cin,name);
        }
        void setSalary()
        {
            cout<<"Enter Salary : ";
            cin>>salary;
        }
        int getCode() { return code; }
        string getName() { return name; }
        float getSalary() { return salary; }
};
class officer
{
    private:
        float DA,HRA;
    public:
        void setDA()
        {
            cout<<"Enter DA : ";
            cin>>DA;
        }
        void setHRA()
        {
            cout<<"Enter HRA : ";
            cin>>HRA;
        }
        float getDA() { return DA; }
        float getHRA() { return HRA; }
};
class manager:public worker,public officer
{
    private:
        float TA,gross_salary;
    public:
        float getTA() 
        { 
            TA=getSalary()*0.1;
            return TA; 
        }
        float getGross()
        {
            gross_salary = TA+getHRA()+getDA()+getSalary();
            return gross_salary;
        }
};
int main()
{
    int n;
    cout<<"Enter Manager count : ";
    cin>>n;
    manager *m=new manager[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Worker Information for "<<i+1<<" : \n\n";
        cout<<"--------------------------------------\n";
        m[i].setCode();
        m[i].setNAme();
        m[i].setSalary();
        m[i].setDA();
        m[i].setHRA();
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n------------------------------------\n";
        cout<<"           Manager Information";
        cout<<"\n------------------------------------\n";
        cout<<"Code          : "<<m[i].getCode()<<endl;
        cout<<"Name          : "<<m[i].getName()<<endl;
        cout<<"Salary        : "<<m[i].getSalary()<<endl;
        cout<<"DA            : "<<m[i].getDA()<<endl;
        cout<<"HRA           : "<<m[i].getHRA()<<endl;
        cout<<"TA            : "<<m[i].getTA()<<endl;
        cout<<"Gross Salary  : "<<m[i].getGross()<<endl;
    }
    delete []m;
    return 0;
}
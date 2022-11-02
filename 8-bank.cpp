#include<iostream>
using namespace std;
class customer
{
    private:
        long long ph_no;
        string name;
    public:
        void setName()
        {
            cout<<"Enter cutomer name            : ";
            fflush(stdin);
            getline(cin,name);
        }
        void setPh()
        {
            cout<<"Enter customer Phone number   : ";
            cin>>ph_no;
        }
        string getName()
        {
            return name;
        }
        long long getPh()
        {
            return ph_no;
        }
};
class depositor:public customer
{
    private:
        int accno;
        float balance;
    public:
        void setAcc()
        {
            cout<<"Enter customer a/c number     : ";
            cin>>accno;
        }
        void setbal()
        {
            cout<<"Enter Balance                 : ";
            cin>>balance;
        }
        int getAcc()
        {
            return accno;
        }
        float getBal()
        {
            return balance;
        }
};
class borrower:public depositor
{
    private:
        int loan_no;
        float loan_amt;
    public:
        void setLno()
        {
            cout<<"Enter loan number             : ";
            cin>>loan_no;
        }
        void setLamt()
        {
            cout<<"Enter loan amount             : ";
            cin>>loan_amt;
        }
        void display()
        {
            cout<<"Details of Customer\n";
            cout<<"\n--------------------------------------------\n";
            cout<<"Customer name         : "<<getName()<<endl;
            cout<<"Customer Phone no.    : "<<getPh()<<endl;
            cout<<"Customer account no.  : "<<getAcc()<<endl;
            cout<<"Balance               : "<<getBal()<<endl;
            cout<<"----------------------------------------------\n\n";
            cout<<"Loan no.              : "<<loan_no<<endl;
            cout<<"Loan amt              : "<<loan_amt<<endl;
            cout<<"----------------------------------------------\n\n";
        }
};
int main()
{
    int n;
    cout<<"Enter no. of customer details you want to enter:";
    cin>>n;
    borrower *p=new borrower[n];
    for(int i=0;i<n;i++)
    {
        p[i].setName();
        p[i].setPh();
        p[i].setAcc();
        p[i].setbal();
        p[i].setLno();
        p[i].setLamt();
        cout<<"---------------------------------------------\n\n";
    }
    for(int i=0;i<n;i++)
    {
        p[i].display();
    }
    delete []p;
    return 0;
}
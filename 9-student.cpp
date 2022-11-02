#include<iostream>
using namespace std;
class student
{
    private:
        int id;
        string name;
    public:
        void setName()
        {
            cout<<"Enter student name         : ";
            fflush(stdin);
            getline(cin,name);
        }
        void setId()
        {
            cout<<"Enter roll no.             : ";
            cin>>id;
        }
        int getID()
        {
            return id;
        }
        string getName()
        {
            return name;
        }
};
class studentExam: public student
{
    private:
        int s1,s2,s3,s4,s5,s6;
    public:
        void setMarks()
        {
            cout<<"Enter marks for subject 1  : ";
            cin>>s1;
            cout<<"Enter marks for subject 2  : ";
            cin>>s2;
            cout<<"Enter marks for subject 3  : ";
            cin>>s3;
            cout<<"Enter marks for subject 4  : ";
            cin>>s4;
            cout<<"Enter marks for subject 5  : ";
            cin>>s5;
            cout<<"Enter marks for subject 6  : ";
            cin>>s6;
        }
        int gets1() { return s1; }
        int gets2() { return s2; }
        int gets3() { return s3; }
        int gets4() { return s4; }
        int gets5() { return s5; }
        int gets6() { return s6; }
};
class studentResult: public studentExam
{
    private:
        double percentage;
    public:
        double percent()
        {
            percentage= (gets1()+gets2()+gets3()+gets4()+gets5()+gets6())/6.0;
            return percentage;
        }
        void display()
        {
            cout<<"\n------------------------------------------------\n";
            cout<<"************ Student Marklist *************\n";
            cout<<"------------------------------------------------\n";
            cout<<"Roll no.            : "<<getID()<<endl;
            cout<<"Student Name        : "<<getName()<<endl<<endl;
            cout<<"Marks of subject 1  : "<<gets1()<<endl;
            cout<<"Marks of subject 2  : "<<gets2()<<endl;
            cout<<"Marks of subject 3  : "<<gets3()<<endl;
            cout<<"Marks of subject 4  : "<<gets4()<<endl;
            cout<<"Marks of subject 5  : "<<gets5()<<endl;
            cout<<"Marks of subject 6  : "<<gets6()<<endl<<endl;
            cout<<"Total Percentage    : "<<percent()<<endl;
            cout<<"------------------------------------------------\n";
        }
};
int main()
{
    int n;
    cout<<"Enter no. of students you want : ";
    cin>>n;
    studentResult *r=new studentResult[n];
    for(int i=0;i<n;i++)
    {
        r[i].setId();
        r[i].setName();
        r[i].setMarks();
    }
    for(int i=0;i<n;i++)
    {
        r[i].display();
    }
    return 0;
}

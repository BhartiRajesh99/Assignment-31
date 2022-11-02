#include<iostream>
using namespace std;
class Subjects
{
    private:
        int s1,s2,s3;
    public:
        void setMarks(int x,int y,int z)
        {
            s1=x;
            s2=y;
            s3=z;
        }
        int gets1()
        {
            return s1;
        }
        int gets2()
        {
            return s2;
        }
        int gets3()
        {
            return s3;
        }
};
class Total:public Subjects
{
    private:
        int total_marks;
    public:
        int marks_total()
        {
            total_marks=gets1()+gets2()+gets3();
            return total_marks;
        }
};
class Percentage:public Total
{
    private:
        float percentage;
    public:
        void calculate()
        {
            percentage=marks_total()/3.0;
        }
        float getPercentage()
        {
            return percentage;
        }
};
int main()
{
    Percentage p1;
    p1.setMarks(56,77,88);
    p1.calculate();
    cout<<"Percentage="<<p1.getPercentage();
    return 0;
}
